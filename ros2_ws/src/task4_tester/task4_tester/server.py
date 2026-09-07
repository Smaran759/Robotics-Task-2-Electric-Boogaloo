import time

import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node

from task4.action import CountDown


class CountDownActionServer(Node):

    def __init__(self):
        super().__init__('countdown_action_server')
        self._action_server = ActionServer(
            self,
            CountDown,
            'countdown',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')

        feedback_msg = CountDown.Feedback()
        feedback_msg.status = 'counting down'

        for i in range(goal_handle.request.target, 0, -1):
            feedback_msg.status = f'{i}...'
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'Feedback: {feedback_msg.status}')
            time.sleep(1)

        goal_handle.succeed()

        result = CountDown.Result()
        result.current_count = 0
        return result


def main(args=None):
    rclpy.init(args=args)

    countdown_action_server = CountDownActionServer()

    rclpy.spin(countdown_action_server)


if __name__ == '__main__':
    main()
