from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint

def first(s):
    print(5)
    for i in range(5):
        print(s[i])

def second():
    t = rdint(50, 100)
    print(t)
    for _ in range(t):
        s = ""
        n = rdint(10**2, 10**3)
        for i in range(n):
            s += chr(rdint(97, 122))
        print(s)

def third():
    t = rdint(50, 100)
    print(t)
    for _ in range(t):
        s = ""
        n = rdint(10**3, 10**4)
        for i in range(n):
            s += chr(rdint(97, 122))
        print(s)

def fourth():
    t = rdint(50, 100)
    print(t)
    for _ in range(t):
        s = ""
        n = rdint(10**4, 10**5)
        for i in range(n):
            s += chr(rdint(97, 122))
        print(s)


lv1 = TestCaseFamily(first, 1, [
    [
        ["ww",
        "bmefbmuyw",
        "bmkgynk",
        "ssgsses",
        "czwqnwzc"],
    ]
])

lv2 = TestCaseFamily(second, 5)
lv3 = TestCaseFamily(third, 10)
lv4 = TestCaseFamily(fourth, 4)

Inerator.generate('test', lv1, lv2, lv3, lv4)
Outerator.generate('test', 'sol.cpp', 'test')
