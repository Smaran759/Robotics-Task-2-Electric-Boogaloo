import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from task2.msg import RoboStatus


class Subscriber(Node):

    def __init__(self):
        super().__init__('subscriber')
        self.subscription = self.create_subscription(
            RoboStatus,
            '/robot_status',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        bot_name = msg.bot_name
        battery_lvl = msg.battery_lvl
        is_moving = msg.is_moving
        error_code = msg.error_code
        self.get_logger().info('I heard: "%s"'% msg.data)


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = Subscriber()

    rclpy.spin(minimal_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
