from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='task4_tester',
            executable='server',
            name='server',
            output='screen'
        ),
        Node(
            package='task4_tester',
            executable='client',
            name='client',
            output='screen'
        ),
    ])
