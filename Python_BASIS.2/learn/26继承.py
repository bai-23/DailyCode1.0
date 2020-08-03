#定义一个动物类
#有两个方法
class Animal():
    def run(self):
        print('跑')
    def sleep(self):
        print('睡')

#定义一个dog类：需要三个方法：睡、跑、旺旺
class  Dog(Animal):
    def bark(self):
        print('叫')
        
class Hsq(Dog):
    def sha(self):
        print('傻')

d = Dog()
d.run()
d.sleep()
d.bark()
issubclass(Dog, Animal)
issubclass(Dog, object)
r = isinstance(d, Dog)
r = isinstance(d, Animal)
print(r)