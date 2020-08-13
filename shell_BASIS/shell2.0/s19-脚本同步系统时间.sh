#!/bin/bash

# 作用： 同步时间
# 30秒同步一次系统时间
# 如果同步失败，进行邮件报警
# 如果同步成功，100次才通知
# 思路：
# 每个30s同步一次时间，该脚本是死循环 （while循环）
# 同步失败发送邮件 （ntpdate 127.0.0.1、rdate -s 127.0.0.1）
# 同步成功100次发送邮件 （定义变量保存成功的次数）

count=0
NTP=127.0.0.1
while true
 do 
	rdate -s $NTP &>/dev/null
	if [ $? -ne 0 ];then
		echo "system date failed" |mail -s "check system date" root@localhost
	else
		let count++
		if [ $count -eq 3 ];then
			echo "system date success" |mail -s "check system date" root@localhost && count=0
		fi
	fi
sleep 2
 done
