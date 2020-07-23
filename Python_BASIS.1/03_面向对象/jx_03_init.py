class Ball:
    def __init__(self, name):
            self.name = name
    def kick(self):
            print('My name is %s.' % self.name)
b = Ball('SONG')
b.kick()