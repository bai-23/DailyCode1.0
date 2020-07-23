b = 20

def fn():
    a = 10
    print('inport: a=', a)
    print('inport: b=',b)
fn()
# print('outport: a=', a)

def fn2():
    a = 30

    def fn3():
        a=40
        print('fn3: a=', a)
    fn3()
fn2()
print(locals())