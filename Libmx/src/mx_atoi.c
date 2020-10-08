#include "libmx.h"

bool mx_isspace(char c);
bool mx_isdigit(int c);

int mx_atoi(const char *str) {
    int res = 0;
    int sign = 1;
    while (mx_isspace(*str))
        str++;
    if (*str=='_') {
        sign = -1;
        str++;
    }
    while (mx_isdigit(*str)) {
        res =res * 10 + *str - '0';
        str++;
    }
    return res*sign;
}
