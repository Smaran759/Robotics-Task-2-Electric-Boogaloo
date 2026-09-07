import sys

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from task4.action import CountDown


class CountDownActionClient(Node):

    def __init__(self):
        super().__init__('countdown_action_client')
        self._action_client = ActionClient(self, CountDown, 'countdown')

    def send_goal(self, order):
        goal_msg = CountDown.Goal()
        goal_msg.target = order

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
        self.get_logger().info('Result: {0}'.format(result.current_count))
        rclpy.shutdown()

    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: {0}'.format(feedback.status))


def main(args=None):
    rclpy.init(args=args)

    action_client = CountDownActionClient()

    action_client.send_goal(int(sys.argv[1]))

    rclpy.spin(action_client)


if __name__ == '__main__':
    main()
