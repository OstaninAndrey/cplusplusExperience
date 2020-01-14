#!/usr/bin/env python

from sys import argv
from random import randrange, seed
min_n, max_n, min_m, max_m, rand_seed = map(int, argv[1:])
seed(rand_seed)
n = randrange(min_n, max_n + 1)
m = randrange(min_m, min(max_m + 1, n))
print(n, m)