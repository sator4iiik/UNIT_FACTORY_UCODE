#include "libmx.h"

bool mx_is_odd(int value) {
    if (value % 2 == 1) {
        return true;
    }
    else if (value % 2 == 0) {
        return false;
    }
    return false;
}
