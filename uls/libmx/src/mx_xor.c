#include "libmx.h"

int mx_xor(int x, int y) {
    return (x || y) && !(x && y);
}
