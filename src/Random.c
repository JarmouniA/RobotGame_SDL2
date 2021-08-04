#include "..\include\common.h"
#include "..\include\Define.h"

int* Random(){
    // C program for generating a random number in a given range.
    // Generates and prints 'count' random numbers in range [lower, upper].
    int lower = 0, upper = 2, num, count = 6, i, *RandVect;
    CALLOC(RandVect, count, int);

    for (i = 0; i < count; i++) {
        num = (rand() % (upper - lower + 1)) + lower;
        (RandVect[num])++;
    }
    return RandVect;
}
