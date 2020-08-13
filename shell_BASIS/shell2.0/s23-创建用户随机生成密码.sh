#!/bin/bash

#批量创建5个用户，每个用户的密码为一个随机数

# 循环5次创建用户
# 产生一个密码文件来保存用户的随机密码
# 从密码文件中取出随机密码赋值给用户

echo user0{1..5}:itcast$[$RANDOM%9000+1000]#@~|tr ' ' '\n'>> user_pass.file

for((i=1;i<=5;i++))
do
	user=`head -$i user_pass.file|tail -1|cut -d: -f1`
	pass=`head -$i user_pass.file|tail -1|cut -d: -f2`
	useradd $user
	echo $pass|passwd --stdin $user
done

