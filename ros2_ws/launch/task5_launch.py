from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='task5_tester',
            executable='server',
            name='goal_tracker_server',
            output='screen'
        ),
        Node(
            package='task5_tester',
            executable='client',
            name='goal_client',
            output='screen'
        ),
    ])
