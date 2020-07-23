#!/usr/bin/env python3
# -*- coding: utf-8 -*-	

import sys
sys.setrecursionlimit(100000)

def mm(n):
    if n < 1:
        return -1
    if n == 1 or n == 2:
        return 1
    else :
        return mm(n - 1) + mm(n - 2)
print(mm(35))
#def pp(m):


