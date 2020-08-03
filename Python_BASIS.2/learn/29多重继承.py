class A(object):
    def test(self):
        print('A')

class B(object):
    def test(self):
        print('B')

class C(A, B):
    pass

x = A()
x.test()
print(C.__bases__)