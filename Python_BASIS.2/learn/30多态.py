class A:
    def __init__(self, name):
        self.name = name
    @property
    def name1(self):
        return self.name
    @name1.setter
    def name1(self, name):
        self.name = name


class B:
    def __init__(self, name):
        self.name = name

    @property
    def name1(self):
        return self.name

    @name1.setter
    def name1(self, name):
        self.name = name

a = A('sun')
b = B('pih')
def say(obj):
    print('hallow %s' % obj.name)
say(a)
say(b)

