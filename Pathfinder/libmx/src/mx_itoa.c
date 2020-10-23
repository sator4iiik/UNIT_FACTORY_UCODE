#include "libmx.h"

char* mx_itoa(int number) {

    long rslt = (number < 0) ? (long)number * -1 : (long)number;
    long buf = (number < 0) ? (long)number * -1 : (long)number;
    int base = 1;
    int size = 0;
    char *str = NULL;
    if(number < 0)
    size ++;

    for(; buf > 0; size ++)
        buf /= 10;

    str = (char *) malloc(sizeof(char) * (size + 1));
    str[size] = '\0';

    if(number < 0)
    str[0] = '-';

    for(; rslt != 0; size --) {
        buf = rslt;
        rslt = buf/10;
        base = buf%10;
        str[size - 1] = base + 48;
    }
    return str;
}
