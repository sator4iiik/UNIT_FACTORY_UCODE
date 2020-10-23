#include "libmx.h"

double mx_pow(double n, unsigned int pow) {
    double j=1;

    for(unsigned int i = 1; i <= pow; i++) {
        j=j*n;
    }
    return j;
}
