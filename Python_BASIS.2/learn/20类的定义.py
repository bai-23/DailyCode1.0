#   定义一个“人”类
class Person :
    #  在类中定义变量和函数,成为所有实例的公共属性,都可访问
    name = "swk"
    sex = ''

    def hello(self):
        print('hello i am %s' %self.name)

# 创建Person的实例
p1 = Person()
p2 = Person()

p1.name = "沙和尚"
p2.name = "孙悟空"
del p2.name

print(p1.name, p2.name)

p1.hello()
p2.hello()

