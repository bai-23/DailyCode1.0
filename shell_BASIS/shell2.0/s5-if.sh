#!/bin/bash

#用户自己输入
#如果用户输入的是hello则输出world
read -p '请输入一个字符串: ' str;
[ "$str" = 'hello' ] && echo 'world' || echo '请输入hello!'
