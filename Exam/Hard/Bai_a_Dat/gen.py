from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint

def lv_1():
    t = rdint(10**2, 10**5)
    print(t)
    for _ in range(t):
        n = rdint(10**5, 10**9)
        a = rdint(1, 10)
        b = rdint(1, 10)
        print(n, a, b, sep=" ")

def lv_2():
    t = rdint(10**5, 10**6)
    print(t)
    for _ in range(t):
        n = rdint(10**7, 10**12)
        a = rdint(1, 50)
        b = rdint(1, 50)
        print(n, a, b, sep=" ")

def lv_3():
    t = rdint(10**5, 10**6)
    print(t)
    for _ in range(t):
        n = rdint(10**9, 10**15)
        a = rdint(10, 100)
        b = rdint(10, 100)
        print(n, a, b, sep=" ")

def lv_4():
    t = rdint(10**5, 10**6)
    print(t)
    for _ in range(t):
        n = rdint(10**17, 10**18 - 100)
        a = rdint(1, 10)
        b = rdint(200, 400)
        print(n, a, b, sep=" ")


lv1 = TestCaseFamily(lv_1, 5)
lv2 = TestCaseFamily(lv_2, 5)
lv3 = TestCaseFamily(lv_3, 5)
lv4 = TestCaseFamily(lv_4, 5)

Inerator.generate('test/input', lv1, lv2, lv3, lv4)
Outerator.generate('test/input', 'sol.cpp', 'test/output')