#可搭配try except else
try:
    with open('date.txt', 'w', encoding='utf-8') as f:
        for each in f:
            print(each)
except OSError as reason:
    print('error!' + str(reason))
