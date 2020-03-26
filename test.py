#! /usr/bin/env python3
# *_* coding: utf-8 *_*
# @File  : test.py
# @Author: Frank1126lin
# @Date  : 3/19/20
import click

@click.command()
@click.argument('name')
def hello(name):
    print('Hello %s!' % name)

if __name__ == '__main__':
    hello()