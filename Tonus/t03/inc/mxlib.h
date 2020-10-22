#ifndef MXLIB_H
#define MXLIB_H

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

void mx_printstr(const char *s);
void mx_printerr(const char *s);

bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printint(int n);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printerr(const char *s);

/////////////--STR--//////////////
char* mx_strnew(const int size);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
char* mx_strncpy(char *dst, const char *src, int len);
char* mx_strdup(const char *str);
char* mx_strjoin(const char *s1, const char *s2);
char* mx_strcat(char *s1, const char *s2);
void mx_strdel(char **str);
char* mx_concat_words(char **words);
char* mx_strtrim(const char *str);
char* mx_del_extra_whitespace(const char *str);
char** mx_strsplit(const char *s, char c);
char *mx_strcpy(char *dst, const char *src);
char *mx_strndup(const char *s1, size_t n);
int mx_count_words(const char *str, char c);

/////////////--ARR--//////////////
int* mx_copy_int_arr(const int *src, int size);
int* mx_del_dup_arr(int *src, int src_size, int *dst_size);
void mx_del_strarr(char ***arr);
void mx_arr_rotate(int *arr, int size, int shift);

/////////////--UTIL--/////////////
unsigned long mx_hex_to_nbr(const char *hex);
char* mx_nbr_to_hex(unsigned long nbr);

/////////////--SORT--/////////////
int mx_insertion_sort(char **arr, int size);
int mx_selection_sort(char **arr, int size);

/////////////--SEARCH--///////////
int mx_linear_search(char **arr, const char *s);
int mx_binary_search(char **arr, int size, const char *s, int *count);

#endif
