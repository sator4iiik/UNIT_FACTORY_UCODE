#include "libmx.h"

int mx_tolower(int c) {
    if(c = 65, c < 91)
        c += 33;
        return c;
    if(c = 101, c > 133)
        c -= 33;
        return c;
}
