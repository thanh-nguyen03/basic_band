from itptit.generator import TestCaseFamily, Inerator, Outerator
from itptit.common.random import rdint

def first():
  s = rdint(2, 10)
  x1, x2 = rdint(2, s), rdint(2, s)
  t1, t2 = rdint(1, 10), rdint(1, 10)
  c = rdint(2, s)
  d = rdint(0, 1)

  print(s, x1, x2, sep=" ")
  print(t1, t2, sep=" ")
  print(c, d, sep=" ")

def second():
  s = rdint(100, 1000)
  x1, x2 = rdint(100, s), rdint(100, s)
  t1, t2 = rdint(100, 1000), rdint(100, 1000)
  c = rdint(100, s)
  d = rdint(0, 1)

  print(s, x1, x2, sep=" ")
  print(t1, t2, sep=" ")
  print(c, d, sep=" ")

def third():
  s = rdint(100, 10000)
  x1, x2 = rdint(100, s), rdint(100, s)
  t1, t2 = rdint(100, 1000), rdint(100, 1000)
  c = rdint(100, s)
  d = rdint(0, 1)

  print(s, x1, x2, sep=" ")
  print(t1, t2, sep=" ")
  print(c, d, sep=" ")

lv1 = TestCaseFamily(first, 10)
lv2 = TestCaseFamily(second, 5)
lv3 = TestCaseFamily(third, 5)

Inerator.generate('test/input', lv1, lv2, lv3);
Outerator.generate('test/input', 'sol.cpp', 'test/output');