#include "libmx.h"

bool mx_isspace(char c) {
    if(c == 9 || c == 10 || c == 11 || c == 12|| c == 13 || c == 32) {
        return true;
    }
    else {
        return false;
    }
}
