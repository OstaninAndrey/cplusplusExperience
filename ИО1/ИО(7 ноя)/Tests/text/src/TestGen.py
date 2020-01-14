import random
random.seed("basic03/text")

class TestGen:
    def __init__(self):
        self.test_number = 0

    def generate_samples(self):
        self.print_test('A')
        self.print_test('WA')
        self.print_test('AC')
        self.print_test('IAMGROOT')
        
    def generate_min_tests(self):
        for i in range(26):
            self.print_test(str(chr(ord('A') + i)))
                          
    def generate_hand_tests(self):
        pass

    def generate_random_test(self, maxn):
        s = ""
        for i in range(maxn):
            c = chr(random.randint(0, 25) + ord('A'))
            s += c
        self.print_test(s)

    def generate_max_tests(self, maxn):
        self.print_test("H" * maxn)
        self.print_test("I" * maxn)

    def print_test(self, text):
        self.test_number += 1
        print('Generating test #%d' % self.test_number)

        test_name = "../tests/" + "{0:0=2d}".format(self.test_number)
        test_file = open(test_name, "w")
        print(text, file=test_file)
        test_file.close()

    def generate_all_tests(self):
        self.generate_samples()
        self.generate_min_tests()
        self.generate_hand_tests()
        
        maxn = 1000
        ns = [5, 10, 50, 100, 500, 1000]
        for n in ns:
            for i in range(3):
                self.generate_random_test(n)
        self.generate_max_tests(maxn)

    def generate_all_tests_argv(self, argv):
        pass            

if __name__ == "__main__":
    import os, shutil
    from sys import argv
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
    #writer.generate_all_tests_argv(argv)
    finish = time.time()
    print('All tests were generated. Elapsed time: ', finish - start)
