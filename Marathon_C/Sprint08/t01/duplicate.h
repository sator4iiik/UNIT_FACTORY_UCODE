#ifndef DUPLICATE_H
#define DUPLICATE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

typedef struct s_intarr {
    int *arr;
    int size;
} t_intarr;

int* mx_copy_int_arr(const int *src, int size);

#endif
