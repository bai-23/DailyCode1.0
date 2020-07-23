class Ball:
    def setname(self, name):
            self.name = name
    def kick(self):
            print('我叫 %s' %self.name)
a = Ball()
a.setname('qiuA')
b = Ball()
b.setname('qiuB')
c = Ball()
c.setname('aof')
a.kick()
c.kick()