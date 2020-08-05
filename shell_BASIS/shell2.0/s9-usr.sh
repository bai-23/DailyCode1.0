#!/bin/bash

#输入一个用户，判断该用户是否存在

read -p "请输入用户名：" usr
id $usr &>/dev/null
if [ $? -eq 0 ];then
	echo "$usr用户存在"
else 
	echo "该用户不存在"
fi
