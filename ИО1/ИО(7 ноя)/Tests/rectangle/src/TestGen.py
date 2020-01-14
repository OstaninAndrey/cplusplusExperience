import random
from sys import stderr

random.seed(":)))")

MAX = 10**5

class TestGen:
    def __init__(self):
        self.test_number = 0

    def generate_samples(self):
        self.print_test(2, 2, 14)
        self.print_test(2, 2, 15)

    def generate_random(self):
        self.print_test(random.randint(1, MAX), random.randint(1, MAX), random.randint(1, MAX))
    
    def generate_yes(self):
        n, m, k = 0, 0, 0
        while True:
            n = random.randint(1, MAX)
            m = random.randint(1, MAX)
            k = random.randint(1, n - 1)
            s = 2 * (n + m + m + n)
            p = s - 2 * k
            if p <= MAX: break
        self.print_test(n, m, p)

    def generate_max(self, i=-1):
        p = MAX
        if i == -1: i = random.randint(1, MAX // 4) * 2
        print("i=", i, file=stderr)
        s = p + 2 * i
        nm = s // 4
        assert(s % 4 == 0)
        n = nm // 2
        m = nm - n
        self.print_test(n, m, p)

    def print_test(self, n, m, p):
        self.test_number += 1
        test_name = "../tests/" + "{0:0=2d}".format(self.test_number)
        test_file = open(test_name, "w")
        print(n, m, p, file=test_file)
        test_file.close()

    def generate_all_tests(self):
        self.generate_samples()                            
        self.generate_max(MAX)
        self.print_test(MAX, MAX, MAX)
        for i in range(10): self.generate_random()
        for i in range(10): self.generate_max()
        for i in range(10): self.generate_yes()

import os, shutil
if os.path.exists('../tests'):
    print('Directory <<tests>> already exists')
    shutil.rmtree('../tests', ignore_errors=False, onerror=None)
try:
    os.makedirs('../tests')
except OSError:
    pass

import time
start = time.time()
writer = TestGen()
writer.generate_all_tests()
finish = time.time()
print('All tests were generated. Elapsed time: ', finish - start)
