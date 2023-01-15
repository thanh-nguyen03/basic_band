from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint

def lv_1():
    t = rdint(10, 50)
    print(t)
    for _ in range(t - 5):
        n = rdint(10, 100)
        print(n)
        for i in range(n):
            print(rdint(1, 15), end=" ")
    
    for _ in range(5):
        n = rdint(10, 1000, 2)
        print(n)
        base = 2
        sum = 0
        while (sum < n):
            if sum + base <= n:
                for i in range(base):
                    print(base, end=" ")
            else:
                for i in range(n - sum):
                    print(base, end=" ")
            sum += base
            base *= 2
        print()

def lv_2():
    t = rdint(10, 50)
    print(t)
    for _ in range(t - 4):
        n = rdint(10**2, 10**3)
        print(n)
        for i in range(n):
            print(rdint(1, 100), end=" ")
    
    for _ in range(4):
        n = rdint(10**2, 10**3, 2)
        print(n)
        base = 2
        sum = 0
        while (sum < n):
            if sum + base <= n:
                for i in range(base):
                    print(base, end=" ")
            else:
                for i in range(n - sum):
                    print(base, end=" ")
            sum += base
            base *= 2
    print()

def lv_3():
    t = rdint(10, 50)
    print(t)
    for _ in range(t - 3):
        n = rdint(10**3, 10**4)
        print(n)
        for i in range(n):
            print(rdint(10, 1000), end=" ")

    for _ in range(3):
        n = rdint(100, 10**3, 2)
        print(n)
        base = 2
        sum = 0
        while (sum < n):
            if sum + base <= n:
                for i in range(base):
                    print(base, end=" ")
            else:
                for i in range(n - sum):
                    print(base, end=" ")
            sum += base
            base *= 2
    print()


lv1 = TestCaseFamily(lv_1, 5)
lv2 = TestCaseFamily(lv_2, 5)
lv3 = TestCaseFamily(lv_3, 10)

Inerator.generate('test/input', lv1, lv2, lv3)
Outerator.generate('test/input', 'sol.cpp', 'test/ouput')