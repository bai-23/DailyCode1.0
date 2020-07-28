import time as t
class Dog():
    def __init__(self, name):
        # 方法一，修改属性名
        self.hidden_name = name
    def hello(self):
        print('%s你好' %self.hidden_name)

    def get_name(self):
        #   用来获取对象的name属性
        return self.hidden_name
    def set_name(self, name):
        self.hidden_name = name
        print('log：%s name属性修改成功' %t.time())

d = Dog('旺财')
d.hello()
d.set_name('小黑')
d.hello()
# print(d.get_name())
