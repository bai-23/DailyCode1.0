import sys

sys.setdefaultencoding('utf8')
  
class Parent:
    def hello(self):
        print('WE')
class Child(Parent):
    pass
p = Parent()
p.hello()
c = Child()
print(c.hello())#继承

#多重继承
#class C(Mom, Father):
#易混乱