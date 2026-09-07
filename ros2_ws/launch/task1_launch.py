from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='task1',
            executable='sensor',
            name='sensor_node',
            output='screen'
        ),
        Node(
            package='task1',
            executable='processor',
            name='processor_node',
            output='screen'
        ),
        Node(
            package='task1',
            executable='logger',
            name='logger_node',
            output='screen'
        ),
    ])
