import random as R

x = R.randint(0, 999)
for i in range(999):
    N = int(input('GUESS: '))
    if N == x:
        print('YES!')
        break
    elif N > x:
        print('再小点')    
    else:
        print('再大点')


