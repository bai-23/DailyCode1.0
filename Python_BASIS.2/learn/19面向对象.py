# 类定义
a = int(10) #创建int的实例
class MyClass():
    pass

print(MyClass)
# 使用MyClass创建一个对象
mc = MyClass()
print(type(mc))
mc1 = MyClass()

print(isinstance(mc1, MyClass))
print(id(MyClass))

# 对象的创建流程
mc2 = MyClass()
#  1. 创建一个变量mc
#  2. 在内存中创建一个新对象
#  3. 将对象的id赋值给变量

# 添加属性
mc.name = "孙悟空"
print(mc.name)