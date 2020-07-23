import easygui as g
g.passwordbox(msg="请输入您的密码")

msg = "请输入用户名和密码"
title = "用户登录接口"
user_info = []
user_info = g.multpasswordbox(msg,title,("用户名","密码"))
print(user_info)