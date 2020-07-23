class Turtle: #类名以大写开头
    color = 'green'
    weight = 10

    def climb(self):
        print('one')

    def run(self):
        print('two')
    def eat(self):
        print('four')
tt = Turtle()
print(tt.eat())

class A:
	def fun(self):
			print('A')
class B:
	def fun(self):
			print('B')
a = A()
b = B()
a.fun()
b.fun()
#多态：同名函数调用出不同元素