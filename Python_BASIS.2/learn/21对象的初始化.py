class Person :
    # name = "sss"
    # 定义特殊方法（魔术方法）
    def __init__(self, name):
        self.name = name

    def hello(self):
        print('大家好，我是%s' %self.name)

# p1 = Person()
# 手动添加name属性
# p1.name = 'zbj'
# p2 = Person()
# p2.name = 'ts'

p1 = Person('孙悟')
p2 = Person('沙和尚')
print(p1.name)
p1.hello()


