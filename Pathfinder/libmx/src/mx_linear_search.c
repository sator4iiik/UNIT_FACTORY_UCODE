#include "libmx.h"

int mx_linear_sear(char **arr, const char *s) {
    int i = 0;
    while (arr [i])  {
        if (!mx_strcmp (arr[i], s)) {
            return i;
        }
        i++;
    }
    return -1;
}
