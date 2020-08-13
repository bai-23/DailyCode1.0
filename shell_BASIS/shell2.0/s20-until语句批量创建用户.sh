#!/bin/bash

#使用until语句批量创建10个用户，要求stu1-5用户的UID分别为1001--1005
#stu6-10用户的家目录分别在/rhome/stu6-10

# 思路
# 创建用户语句  useradd -u | useradd -d
# 使用循环语句  until批量创建用户
# 判断用户前5个和后5个（条件判断语句）

if [ -d /rhome ]
then 
	echo "/rhome目录已存在"
else
	mkdir /rhome
	echo "/rhome不存在，已完成创建"
fi

i=1
until [ $i -gt 10 ]
do 
	if [ $i -le 5 ];then
		useradd -u $[1000+$i] stu$i
		echo 123|passwd --stdin stu$i
	else
		useradd -d /rhome/stu$i stu$i
		echo 123|passwd --stdin stu$i
	fi	
let i++
done


