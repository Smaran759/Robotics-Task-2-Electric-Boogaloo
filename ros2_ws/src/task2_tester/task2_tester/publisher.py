import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from task2.msg import RoboStatus
import random

class Publisher(Node):

    def __init__(self):
        super().__init__('publisher')
        self.publisher_ = self.create_publisher(RoboStatus, '/robot_status', 10)
        self.declare_parameter('frequency',2.0)
        frequency = self.get_parameter('frequency').get_parameter_value().double_value
        timer_period = 1/frequency  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        my_param = self.get_parameter('frequency').get_parameter_value().double_value
        my_new_param = rclpy.parameter.Parameter('frequency',
                                                rclpy.Parameter.Type.DOUBLE,
                                                2.0
                                                )
        all_new_parameters = [my_new_param]
        self.set_parameters(all_new_parameters)
        msg = RoboStatus()
        msg.bot_name = 'Optimus Prime'
        msg.battery_lvl = float(random.randrange(0,100))
        msg.is_moving = True
        msg.error_code = random.randint(0,3)
        msg.data = f'Bot Name: {msg.bot_name} | Battery Level: {msg.battery_lvl} | Mobile: {msg.is_moving} | Error:{msg.error_code}'
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.data)


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = Publisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
