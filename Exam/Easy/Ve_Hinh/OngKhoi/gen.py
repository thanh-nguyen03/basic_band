from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint


def sinh(n):
    print(n)

lv1 = TestCaseFamily(sinh, 16, [
    [5],
    [6],
    [7],
    [8],
    [9],
    [10],
    [11],
    [12],
    [13],
    [14],
    [15],
    [16],
    [17],
    [18],
    [19],
    [20],
])
Inerator.generate('test', lv1)
Outerator.generate('test', 'sol.cpp', 'test');