from setuptools import find_packages
from setuptools import setup

setup(
    name='tactigon_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('tactigon_msgs', 'tactigon_msgs.*')),
)
