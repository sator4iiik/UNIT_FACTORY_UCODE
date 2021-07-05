#include "libmx.h"

int mx_atoi(const char *str) {
    int res = 0;
    int sign = 1;
    while (mx_isspace(*str))
        str++;
    if (*str=='-') {
        sign = -1;
        str++;
    }
    while (mx_isdigit(*str)) {
        res =res * 10 + *str - '0';
        str++;
    }
    return (res * sign);
}
