from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint

def lv_1():
    t = rdint(10, 100)
    print(t)
    for _ in range(t):
        r = rdint(100000, 1000000)
        l = rdint(10, r)
        print(l, r, sep=" ")

lv1 = TestCaseFamily(lv_1, 15)
Inerator.generate('test', lv1)
Outerator.generate('test', 'sol.cpp', 'test')
