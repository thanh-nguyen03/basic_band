from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint

def first():
    t = rdint(5, 50)
    print(t)
    for _ in range(t):
        n = rdint(5, 100)
        k = rdint(2, n)
        print(n, k, sep=" ")
        for i in range(n):
            for j in range(n):
                print(rdint(0, 1), end=" ")
            print()
            
def second():
    t = rdint(5, 20)
    print(t)
    for _ in range(t):
        n = rdint(500, 600)
        k = rdint(200, n)
        print(n, k, sep=" ")
        for i in range(n):
            for j in range(n):
                print(rdint(0, 1), end=" ")
            print()

    
lv1 = TestCaseFamily(first, 15)
lv2 = TestCaseFamily(second, 5)

Inerator.generate('test/input', lv1, lv2)
Outerator.generate('test/input', 'sol.cpp', 'test/input')