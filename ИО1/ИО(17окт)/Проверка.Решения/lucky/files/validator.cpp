#include "testlib.h"

const int MIN = 1;
const int MAX = 1000000000;

int main(int argc, char * argv[])
{
    registerValidation();
    
    int n = inf.readInt(MIN, MAX, "n");
    inf.readSpace();
    int m = inf.readInt(0, n - 1, "m");
    inf.readEoln();
    inf.readEof();

    return 0;
}
