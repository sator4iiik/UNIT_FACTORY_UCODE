#include <stdlib.h>

char *mx_strnew(const int size) {
    char *temp = NULL;

    if (size > 0) {
        temp = malloc(size + 1);
        temp[size] = '\0';
    }
    return temp;
}
