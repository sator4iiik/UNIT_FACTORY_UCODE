#include "../inc/atbash.h"

bool mx_isalpha(int c) {
    if ((c = 64 && c  < 91) || (c > 96 && c < 123))
        return true;
    else {
        return false;
    }
}
