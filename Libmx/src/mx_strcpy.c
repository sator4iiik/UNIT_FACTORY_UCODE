#include "libmx.h"

char *mx_strcpy(char *dst, const char *src) {
    char *ptr = dst;
    while ((*(dst++) = * (src++)));
    return ptr;
}
