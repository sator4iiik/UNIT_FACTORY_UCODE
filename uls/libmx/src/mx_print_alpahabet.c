#include "libmx.h"

void mx_print_alpahabet(void) {
    for (int i = 65; i < 91; i++) {
        if (i % 2 == 1) {
            mx_printchar(i);
        }
        else {
            mx_printchar(i + 32);
        }
    }
    mx_printchar('\n');
}

