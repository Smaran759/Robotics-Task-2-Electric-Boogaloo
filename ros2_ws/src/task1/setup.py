import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'task1'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Smaram',
    maintainer_email='smaran.dandekar753@gmal',
    description='Task 1',
    license='Apache license 2.0',
    extras_require={
        'test': [
            'pytest'
        ],
    },
    entry_points={
        'console_scripts': [
            'sensor = task1.sensor_node:main',
            'processor = task1.processor_node:main',
            'logger = task1.logger_node:main',
        ],
    },
)
