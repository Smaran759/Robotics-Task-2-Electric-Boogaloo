from setuptools import find_packages
from setuptools import setup

setup(
    name='task5',
    version='0.0.0',
    packages=find_packages(
        include=('task5', 'task5.*')),
)
