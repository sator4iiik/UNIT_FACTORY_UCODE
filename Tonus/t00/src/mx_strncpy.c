#include "../inc/mxlib.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    char *ptr = dst;
    for (int i = 0; i < len; i++) {
        *dst++ = *src;
        if (*src)
            src++;
    }
    return ptr;
}
