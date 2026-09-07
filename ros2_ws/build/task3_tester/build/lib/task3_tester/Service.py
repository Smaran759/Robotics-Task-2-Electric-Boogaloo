from task3.srv import AddTwo                                                           # CHANGE

import rclpy
from rclpy.node import Node


class MinimalService(Node):

    def __init__(self):
        super().__init__('minimal_service')
        self.srv = self.create_service(AddTwo, 'addtwo', self.addtwo_callback)       # CHANGE

    def addtwo_callback(self, request, response):                                                  # CHANGE
        response.sum = request.a + request.b                                                   # CHANGE
        self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))  # CHANGE

        return response

def main(args=None):
    rclpy.init(args=args)

    minimal_service = MinimalService()

    rclpy.spin(minimal_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()
