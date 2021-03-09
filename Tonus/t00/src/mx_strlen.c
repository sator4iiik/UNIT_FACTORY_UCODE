#include "../inc/morse.h"

int mx_strlen(const char *s) {
    int res = 0;

    while (s[res] != '\0')
        res++;
    return res;
}
