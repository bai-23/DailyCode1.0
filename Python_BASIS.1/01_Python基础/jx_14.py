def foo(n):
    if n >= 2:
        foo(n//2)
    print(n%2, end = ' ')


