from os import chdir
from itptit.generator import Inerator, Outerator, TestCaseFamily
from random import sample, randint, shuffle

def _gen1():
    p = sample(range(1000), randint(100, 1000))
    shuffle(p)
    print(' '.join([str(e) for e in p]))
def _gen2():
    p = sample(range(10000), randint(1000, 10000))
    shuffle(p)
    print(' '.join([str(e) for e in p]))
def _gen3():
    p = sample(range(100000), randint(10000, 10000))
    shuffle(p)
    print(' '.join([str(e) for e in p]))
# chdir(r'oopython\hw\4')
Inerator.generate('test', TestCaseFamily(_gen1, 5), TestCaseFamily(_gen2, 5), TestCaseFamily(_gen3, 5))
Outerator.generate('test', 'solution.py', 'test')