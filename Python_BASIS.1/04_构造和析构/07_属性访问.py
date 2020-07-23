'''
class C:
    def __init__(self):
        self.x = 'X-man'

c = C()
print(c.x)
print(getattr(c, 'x', '没有这个属性'))
print(getattr(c, 'y', '没有这个属性'))

class B:
    def __init__(self, size = 10):
            self.size = size
    def getsize(self):
            return self.size
    def setsize(self, value):
            self.size = value
    def delsize(self):
        del self.size
    x = property(getsize, setsize, delsize)
c = B()
c.x = 1
print(c.x)
print(c.size)
del c.x
print(c.size)

class C:
    def __getattribute__(self, name):
        print('getattribute')
        return super().__getattribute__(name)
    def __getattr__(self, name):
        print('getattr')
    def __setattr__(self, name, value):
        print('setattr')
        super().__setattr__(name, value)
    def __delattr__(self, name):
        print('delattr')
        super().__delattr__(name)
c = C()
print(c.x)
c.x = 1
print(c.x)
del c.x
print(c.x)
'''
#练习
class A:
    def __init__(self, wide = 0, heigh = 0):
        self.wide = wide
        self.heigh = heigh

    def __setattr__(self, name, value):
        if name == 'square':
            self.wide = value
            self.heigh = value
        else:
            #super().__setattr__(name, value)#方法一
            self.__dict__[name] = value#方法二
            #self.name = value此句替换上一行则报错
    
    def Area(self):
        return self.wide * self.heigh
r1 = A(3, 5)
print(r1.Area)
r1.square = 10
print(r1.wide)
print(r1.Area)
print(r1.__dict__)