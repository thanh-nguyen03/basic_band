from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint

def first():
    t = rdint(50, 100)
    print(t)
    for _ in range(t):
        n = rdint(10, 10**2)
        print(n)
        for i in range(n):
            print(rdint(0, 10), end=" ")
        print()
        
def second():
    t = rdint(50, 100)
    print(t)
    for _ in range(t):
        n = rdint(10**2, 10**3)
        print(n)
        for i in range(n):
            print(rdint(0, 100), end=" ")
        print()


    
lv1 = TestCaseFamily(first, 15)
lv2 = TestCaseFamily(second, 5)

Inerator.generate('test/', lv1, lv2)
Outerator.generate('test', 'sol.cpp', 'test')