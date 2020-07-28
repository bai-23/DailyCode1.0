class Dog:
    def __init__(self, name, age, gender, height):
        self.name = name
        self.age = age
        self.gender = gender
        self.height = height
    def woof(self):
        print('汪汪汪')
    def eat(self):
        print('嗷呜')
    def run(self):
        print('%s跑起来了' % self.name)

d1 = Dog('旺财', 8, 'male', 30)

d1.run()
