from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='task3_tester',
            executable='service',
            name='Service',
            output='screen'
        ),
        Node(
            package='task3_tester',
            executable='client',
            name='Client',
            output='screen'
        ),
    ])
