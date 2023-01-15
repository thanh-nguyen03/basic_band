from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint

def first():
    t = rdint(2, 10)
    print(t)
    for i in range(t):
        n = rdint(10, 10**3)
        for j in range(n):
            print(rdint(0, 1), end="")
        print()
        for j in range(n):
            print(rdint(0, 1), end="")
        print()

def second():
    t = rdint(2, 10)
    print(t)
    for i in range(t):
        n = rdint(10**3, 10**5)
        for j in range(n):
            print(rdint(0, 1), end="")
        print()
        for j in range(n):
            print(rdint(0, 1), end="")
        print()

lv1 = TestCaseFamily(first, 10)
lv2 = TestCaseFamily(second, 10)

Inerator.generate('test', lv1, lv2)
Outerator.generate('test', 'sol.cpp', 'test')
