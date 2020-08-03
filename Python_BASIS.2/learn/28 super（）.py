# import sys
# sys.setrecursionlimit(10000)

class Animal:
    def __init__(self, name):
        self.name = name
    def Run(self):
        print('跑')

    def sleep(self):
        print('睡')

    @property
    def name(self):
        return self.name
    @name.setter
    def name(self, name):
        self.name = name

#父类中的所有方法都会被继承
class Dog(Animal):
    # 重写init
    def __init__(self, name, age):
        # Animal.__init__(self, name)  耦合
        super().__init__(name)
        self.age = age

    def bark(self):
        print('叫')
    def Run(self):
        print('跑')

    @property
    def age(self):
        return self.age

    @age.setter
    def name(self, age):
        self.age = age

p = Dog("旺财", 18)
print(p.age)
print(p.name)
