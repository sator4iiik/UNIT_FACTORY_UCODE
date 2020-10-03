#pragma once

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <malloc/malloc.h>

typedef struct s_list {
    void *data;
    struct s_list *next;
}               t_list;



//------UTILS PACK------//

void mx_printchar(char c);
void mx_print_unicode(wchar_t c);
void mx_printstr(const char *s);
void mx_print_strarr(char **arr, const char *delim);
void mx_printint(int n);
double mx_pow(double n, unsigned int pow);
int mx_sqrt(int x);

