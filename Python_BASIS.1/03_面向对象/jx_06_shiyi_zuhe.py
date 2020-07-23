class Tur:
    def __init__(self, x):
        self.num = x #传入参数，表示多少只乌龟
class Fish:
    def __init__(self, x):
        self.num = x #
class Pool:
    def __init__(self, x, y):
        self.tur=Tur(x)
        self.fish = Fish(y)

    def print_num(self):
        print("总共有乌龟 %d 只，小鱼 %d 条" % (self.tur.num, self.fish.num))
pool = Pool(1, 10)
pool.print_num()

