# import tensorflow
class Person():
    def __init__(self, name, age):
        self._name = name
        self._age = age

    @property
    def name(self):
        return self._name
    @name.setter
    def name(self, name):
        self._name = name

    @property
    def age(self):
        return self._age
    @age.setter
    def age(self, age):
        self._age = age
p = Person('吧唧', 10)
print(p.name, p.age)
p.age = 12
p.name = '孙悟空'
print(p.name, p.age)
