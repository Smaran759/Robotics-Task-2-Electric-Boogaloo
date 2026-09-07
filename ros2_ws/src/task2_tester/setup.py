import os
from glob import glob
from setuptools import find_packages, setup

package_name = 'task2_tester'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Smaran',
    maintainer_email='smaran.dandekar753@gmail.com',
    description='Custom msg pkg',
    license='Apache License 2.0',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'publisher = task2_tester.publisher:main',
            'subscriber = task2_tester.subscriber:main',
        ],
    },
)

