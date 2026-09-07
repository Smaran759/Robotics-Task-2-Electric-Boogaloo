# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from geometry_msgs.msg import Vector3
import random

class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Vector3, 'topic', 10)
        self.declare_parameter('frequency', 2.0)
        frequency = self.get_parameter('frequency').get_parameter_value().double_value
        timer_period = 1/frequency  # seconds
        self.timer = self.create_timer(timer_period, self.data_callback)

    def data_callback(self):
        my_param = self.get_parameter('frequency').get_parameter_value().double_value
        my_new_param = rclpy.parameter.Parameter('frequency',
                                                 rclpy.Parameter.Type.DOUBLE,
                                                 2.0
                                                 )
        all_new_parameters = [my_new_param]
        self.set_parameters(all_new_parameters)
        msg = Vector3()
        msg.x = float(random.randint(0,10))
        msg.y = float(random.randint(0,10))
        msg.z = float(random.randint(0,10))
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: x={msg.x} y={msg.y} z={msg.z}')

def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
