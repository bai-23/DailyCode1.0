import random as r

class Fish:
    def __init__(self):
        self.x = r.randint(0, 10)
        self.y = r.randint(0, 10)
    def move(self):
        self.x -= 1
        print('POS：', self.x, self.y)
class Gold(Fish):
    pass
class Carp(Fish):
    pass
class Salmon(Fish):
    pass
class shark(Fish):
    def __init__(self):
        Fish.__init__(self)
        self.hungry = True
    def eat(self):
        if self.hungry:
            print('eat')
            self.hungry = False
        else:
            print('eatok')
shark = shark()
shark.move()
