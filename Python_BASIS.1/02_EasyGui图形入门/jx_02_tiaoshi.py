#！/usr/bin/env python
# -*- coding:utf-8 -*-
# __Author__ = "Ma Qing"
# __date__ = "2017/03/31"
# __Desc__ = 

import easygui
if easygui.ccbox('你在搞什么啊'):
    easygui.msgbox('打屁屁')  #用户选择继续，
   #当然你也可以指定信息参数和标题参数
    title = easygui.msgbox(msg="我一定要学会编程！",
        title="标题部分",ok_button="加油")

else:
    pass      #用户选择取消