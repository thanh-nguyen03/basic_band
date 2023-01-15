from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint

def lv_1():
    t = rdint(10, 100)
    print(t)
    for _ in range(t):
        n = rdint(10, 100)
        print(n)
        for i in range(n):
            for j in range(n):
                print(rdint(0, 10**3), end=" ")
            print()


def lv_2():
    t = 10
    print(t)
    for _ in range(t):
        n = 30
        print(n)
        for i in range(n):
            for j in range(n):
                print(rdint(10**9 + 7, 10**15, 6), end=" ")
            print()



lv1 = TestCaseFamily(lv_1, 10)
lv2 = TestCaseFamily(lv_2, 10)
Inerator.generate('test', lv1, lv2)
Outerator.generate('test', 'sol.cpp', 'test')
