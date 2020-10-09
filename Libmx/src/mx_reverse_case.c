#include "libmx.h"

void mx_reverse_case(char *s) {
    int i = 0;

    while (s[i] != '\0') {
        if (mx_isupper(s[i]))
            s[i] = mx_tolower(s[i]);
        else if (mx_islower(s[i]))
            s[i] = mx_toupper(s[i]);
        i++;
    }
}
