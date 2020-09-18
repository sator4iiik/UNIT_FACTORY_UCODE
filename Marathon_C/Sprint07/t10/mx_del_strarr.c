#include <stdlib.h>

void mx_strdel(char **str);
void mx_del_strarr(char ***arr) {
    char **del_arr = *arr;

    while (*del_arr)
        mx_strdel(del_arr++);
    free(*arr);
    *arr = NULL;
}

