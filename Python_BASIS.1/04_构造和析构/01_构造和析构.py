#__init__
class Area:
    def __init__(self, x, y):
        self.x = x
    #self.x为类实例化后的对象的局部变量， X为传入的参数
        self.y = y
    def C(self):
        return (self.x + self.y) * 2
    def gArea(self):
        return self.x * self.y
rect = Area(3, 4)
print(rect.C())
print(rect.gArea()) 

#__new__对象实例化
class Cap(str):
    def __new__(cls, string):
        string = string.upper()
        return str.__new__(cls, string)
a = Cap('i love u')
print(a)

#__del__(self)析构器
class B:
    def __init__(self):
        print('init调用')
    def __del__(self):
        print('del调用')
b1 = B()
del b1
