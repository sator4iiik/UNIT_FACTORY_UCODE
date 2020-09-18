#include <unistd.h>

void mx_printstr(const char *s) {
    write(1, s, 1);
}
