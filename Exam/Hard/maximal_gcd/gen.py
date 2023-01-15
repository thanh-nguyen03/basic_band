from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint

def lv_1():
    t = rdint(10, 100)
    print(t)
    for _ in range(t):
        n = rdint(5, 100)
        k = rdint(1, 10)
        print(n, k, sep=" ")

def lv_2():
    t = rdint(10, 100)
    print(t)
    for _ in range(t):
        n = rdint(100, 10**5)
        k = rdint(10, 1000)
        print(n, k, sep=" ")

def lv_3():
    t = rdint(10, 100)
    print(t)
    for _ in range(t):
        n = rdint(10**5, 10**8)
        k = rdint(1000, 10**5)
        print(n, k, sep=" ")

def lv_4():
    t = rdint(10, 100)
    print(t)
    for _ in range(t):
        n = rdint(10**6, 10**9)
        k = rdint(10*3, 10**4)
        print(n, k, sep=" ")

def lv_5():
    t = rdint(70, 100)
    print(t)
    for _ in range(t - 10):
        n = rdint(10**6, 10**10)
        k = rdint(10**4, 10**8)
        print(n, k, sep=" ")
    
    for _ in range(10):
        n = rdint(5, 100)
        k = rdint(1, 10)
        print(n, k, sep=" ")

lv1 = TestCaseFamily(lv_1, 2)
lv2 = TestCaseFamily(lv_2, 3)
lv3 = TestCaseFamily(lv_3, 3)
lv4 = TestCaseFamily(lv_4, 5)
lv5 = TestCaseFamily(lv_5, 2)

Inerator.generate('test/input', lv1, lv2, lv3, lv4, lv5)
Outerator.generate('test/input', 'solution.cpp', 'test/output')