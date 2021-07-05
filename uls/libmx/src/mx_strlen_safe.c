#include "libmx.h"

int mx_strlen_safe(const char *s) {
    int len = 0;

    if (s)
        while (s[len])
            len++;
    return len;
}
