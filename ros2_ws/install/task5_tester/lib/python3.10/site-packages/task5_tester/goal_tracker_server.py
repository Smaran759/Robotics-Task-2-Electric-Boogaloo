import math
import time

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from task5.action import TrackGoal


class GoalTrackerServer(Node):

    def __init__(self):
        super().__init__('goal_tracker_server')
        self._action_server = ActionServer(
            self,
            TrackGoal,
            'track_goal',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        target_x = goal_handle.request.x
        target_y = goal_handle.request.y
        self.get_logger().info(f'Moving to target ({target_x}, {target_y})')

        distance = math.sqrt(target_x ** 2 + target_y ** 2)

        feedback_msg = TrackGoal.Feedback()

        while distance > 0.5:
            distance -= 0.5
            if distance < 0.5:
                distance = 0.5
            feedback_msg.distance_left = distance
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Distance left: {distance}m')
            time.sleep(1)

        goal_handle.succeed()

        result = TrackGoal.Result()
        result.result = 'Goal Completed'
        return result


def main(args=None):
    rclpy.init(args=args)

    goal_tracker_server = GoalTrackerServer()

    rclpy.spin(goal_tracker_server)


if __name__ == '__main__':
    main()
