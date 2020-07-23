'''
for i in 'song':#循环
    print(i)

link={1:'sdff',\
    2:'sff',\
    3:'sfsffffffffwt'}
for each in link:
    print('%s -> %s' % (each, link[each]))

str1 = 'song'#for语句原理
it = iter(str1)
print(next(it))
print(next(it))
print(next(it))
print(next(it))
print(next(it))
'''
class Fib:
    def __init__(self, n = 20):
        self.a = 0
        self.b = 1
        self.n = n
    def __iter__(self):
        return self
    def __next__(self):
        self.a, self.b = self.b, self.a + self.b
        if self.a > self.n:
            raise StopIteration
        return self.a
fib = Fib(100)
for each in fib:
    #if each < 100: # 与n = 20效果相同
        print(each)
    #else:
        #break


