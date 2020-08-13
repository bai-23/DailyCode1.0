#!/bin/bash

#需求：批量创建5个用户，u1-u5，并新建一个组class存放，统一密码123
#思路：
#添加用户命令：useradd -G class
#判断class组是否存在: grep -w ^class /etc/group 或 groupadd class
#循环实现: for
#设置密码【循环体内】

grep -w ^class /etc/group &>/dev/null
test $? -ne 0 && groupadd class

for ((i=1;i<=2;i++))
 do 	
	uesradd -G class u$i
	echo 123|passwd --stdin u$i
 done

#保存日志文件


