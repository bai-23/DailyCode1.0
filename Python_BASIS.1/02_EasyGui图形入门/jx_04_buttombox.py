import easygui as g
str1 = '你喜欢下面哪种水果?'
g.buttonbox(msg= str1.center(70),title="嗨",choices=('我', "西瓜","苹果","草莓"))