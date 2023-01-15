from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint

def lv_1():
    t = rdint(10, 100)
    print(t)
    for _ in range(t):
        n = rdint(100, 10**3)
        print(n)
        for i in range(n):
            print(rdint(2, 10**4), end=" ")
        print()

def lv_2():
    t = rdint(10, 100)
    print(t)
    for _ in range(t):
        n = rdint(100, 10**4)
        print(n)
        for i in range(n):
            print(rdint(2, 10**4), end=" ")
        print()

lv1 = TestCaseFamily(lv_1, 3)
lv2 = TestCaseFamily(lv_2, 17)
Inerator.generate('test', lv1, lv2)
Outerator.generate('test', 'sol.cpp', 'test')
