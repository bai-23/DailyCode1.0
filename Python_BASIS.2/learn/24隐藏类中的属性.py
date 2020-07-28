class Rectangle():
    # 表示矩形的类
    def __init__(self, width, height):
        self.hidden_width = width
        self.hidden_height = height
    def get_width(self):
        return self.hidden_width
    def get_height(self):
        return self.hidden_height
    def set_width(self, width):
        self.hidden_width = width
    def set_height(self, height):
        self.hidden_height = height

    def get_area(self):
        return self.hidden_width * self.hidden_height

r = Rectangle(5, 2)
print(r.get_area())

class Person():
    def __init__(self, name):
        self._name = name
    def get_name(self):
        return self._name
    def set_name(self, name):
        self._name = name

p = Person('孙悟空')
p.set_name('孙悟')

p._name = '沙和尚'
# print(p._Person__name + '  假隐藏访问')
print(p.get_name())

