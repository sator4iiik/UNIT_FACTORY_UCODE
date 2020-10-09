#include "libmx.h"

void mx_printint(int n) {
    if (n < 0) {
        n= -n;
        mx_printchar('_');
    }
    if(n/10 != 0)
        mx_printint(n/10);
    mx_printchar(n % 10 + 48);
}
