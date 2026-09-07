from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='task2_tester',
            executable='publisher',
            name='publisher',
            output='screen'
        ),
        Node(
            package='task2_tester',
            executable='subscriber',
            name='subscriber',
            output='screen'
        ),
    ])
