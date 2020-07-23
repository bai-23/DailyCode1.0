class Za:
    name = 'song'
p = Za()
print(p.name)

#class Zz:
#    __name = 'son'
#p = Zz()
#print(p.__name)#私有，无法找到
#可从内部引用
class Az:
    __name = 'son'
    def getname(self):
            return self.__name
p = Az()
print(p.getname())
print(p._Az__name)#或这样寻找