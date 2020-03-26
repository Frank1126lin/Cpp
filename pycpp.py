#! /usr/bin/env python3
# *_* coding: utf-8 *_*
# @File  : pycpp.py
# @Author: Frank1126lin
# @Date  : 3/19/20

import os
import click

'''
使用click和os，处理C++编译及输出，实现python pycpp.py xxx.cpp的编译。
'''
@click.command()
@click.argument('file')
def Begin(file):
    if os.path.isfile(file):
        os.system('g++ {}'.format(file))
        if os.path.exists('./a.out'):
            os.system('./a.out')
            os.system('rm a.out')
            return os.system('echo 编译成功！')
        else:
            return os.system('echo Error:编译错误！')
    else:
        return os.system('echo Error:没有文件！')


if __name__ == '__main__':
    Begin()
