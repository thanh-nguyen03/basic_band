from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint

def first():
    n = rdint(5, 30, 2)
    print(n)

lv = TestCaseFamily(first, 15)

Inerator.generate('Exam/Easy/Ve_Hinh/Hinh1/test/input', lv)
Outerator.generate('Exam/Easy/Ve_Hinh/Hinh1/test/input', 'Exam/Easy/Ve_Hinh/Hinh1/sol.cpp', 'Exam/Easy/Ve_Hinh/Hinh1/test/output')