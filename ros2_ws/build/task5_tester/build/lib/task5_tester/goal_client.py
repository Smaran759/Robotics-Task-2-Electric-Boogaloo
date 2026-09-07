import random

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from task5.action import TrackGoal


class GoalClient(Node):

    def __init__(self):
        super().__init__('goal_client')
        self._action_client = ActionClient(self, TrackGoal, 'track_goal')
        self._timer = self.create_timer(10.0, self.send_goal)

    def send_goal(self):
        goal_msg = TrackGoal.Goal()
        goal_msg.x = random.uniform(-10.0, 10.0)
        goal_msg.y = random.uniform(-10.0, 10.0)

        self.get_logger().info(f'Sending goal: x={goal_msg.x:.2f}, y={goal_msg.y:.2f}')

        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.feedback_callback)

        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')

        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Result: {result.result}')

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(f'Distance left: {feedback.distance_left}m')


def main(args=None):
    rclpy.init(args=args)

    goal_client = GoalClient()

    rclpy.spin(goal_client)


if __name__ == '__main__':
    main()
