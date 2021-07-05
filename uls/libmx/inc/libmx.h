
/*//////////////////////////////////////////////////////////////////////
 *
 *
 *
 *                                      w 8
 *          .d8b. 8d8b .d88b 888P 8d8b. w 8.dP .d8b. Yb  dP
 *          8' .8 8P   8.dP'  dP  8P Y8 8 88b  8' .8  YbdP
 *          `Y8P' 8    `Y88P d888 8   8 8 8 Yb `Y8P'   YP
 *
 *                       LIBRARY MX_FUNCTION
 *                              2020
 *
 *
 *
 *|||||||||quantity function 94|||||||||||||||||||||||||size of pe: 40k|
 *//////////////////////////////////////////////////////////////////////


#pragma once

#include <malloc/malloc.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdbool.h>
#include <memory.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <errno.h>
#include <ctype.h>
#include <stdio.h>
#include <wchar.h>
#include <math.h>
#include <time.h>

// #include <wchar.h>
// #include <stddef.h>

#define INT_MIN -2147483648
#define LONG_MAX 9223372036854775807
#define LONG_MIN -9223372036854775807

// struct. prototypes
typedef struct s_list {
    void *data;
    struct s_list *next;
}               t_list;


// typedef struct read_line {
//     char delim;
//     int chars;
//     int index;
//     char *buf;
//     size_t k;
//     size_t j;
//     int flag;
//     int sum;
//     int fd;
// }   r_line;

/////////-UTILS PACK-///14//////

int mx_sqrt(int x);
void mx_printint(int n);
char *mx_itoa(int number);
void mx_printchar(char c);
void mx_printstr(const char *s);
void mx_print_unicode(wchar_t c);
char *mx_nbr_to_hex(unsigned long nbr);
int mx_bubble_sort(char **arr, int size);
double mx_pow(double n, unsigned int pow);
unsigned long mx_hex_to_nbr(const char *hex);
int mx_quicksort(char **arr, int left, int right);
void mx_foreach(int *arr, int size, void(*f)(int));
void mx_print_strarr(char **arr, const char *delim);
int mx_binary_search(char **arr, int size, const char *s, int *const);

/////////-STRING PACK-///28//////

void mx_strdel(char **str);
int mx_strlen(const char *s);
void mx_str_reverse(char *s);
void mx_del_strarr(char ***arr);
char *mx_strdup(const char *s1);
char *mx_strnew(const int size);
int mx_strlen_safe(const char *s);
char *mx_strtrim(const char *str);
char *mx_strchr(const char *s, int c);
void mx_swap_char(char *s1, char *s2);
char *mx_file_to_str(const char *file);
char **mx_strsplit(const char *s, char c);
char *mx_strndup(const char *s1, size_t n);
char *mx_del_extra_spaces(const char *str);
int mx_count_words(const char *str, char c);
char *mx_strcpy(char *dst, const char *src);
int mx_strcmp(const char *s1, const char *s2);
int mx_get_char_index(const char *str, char c);
char *mx_del_extra_whitespaces(const char *str);
char *mx_strjoin(const char *s1, const char *s2);
void mx_str_separate(const char *str, char delim);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strncmp(const char *s1, const char *s2, int n);
int mx_count_substr(const char *str, const char *sub);
int mx_get_substr_index(const char *str, const char *sub);
char *mx_strstr(const char *haystack, const char *needle);
char *mx_strcat(char *restrict s1, const char *restrict s2);
char *mx_replace_substr(const char *str, const char *sub,
                        const char *replace);
int mx_read_line(char **lineptr, size_t buf_size, char delim,
                const int fd);
char *mx_strnjoin(char const *s1, char const *s2, int len1, int len2);

/////////-MEMORYPACK-///09/////

void *mx_realloc(void *ptr, size_t size);
void *mx_memset(void *b, int c, size_t len);
void *mx_memchr(const void *s, int c, size_t n);
void *mx_memrchr(const void *s, int c, size_t n);
int mx_memcmp(const void *s1, const void *s2, size_t n);
void *mx_memmove(void *dst, const void *src, size_t len);
void *mx_memccpy(void *restrict dst, const void *restrict src,
                int c, size_t n);
void *mx_memmem(const void *big, size_t big_len, const void *little,
                size_t little_len);
void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n);

/////////-LISTPACK-///07/////

int mx_list_size(t_list *list);
void mx_pop_back(t_list **head);
void mx_pop_front(t_list **head);
t_list *mx_create_node(void *data);
void mx_push_back(t_list **list, void *data);
void mx_push_front(t_list **list, void *data);
t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *));

/////////-ADDITIONALPACK-///40////

int mx_tolower(int c);
int mx_toupper(int c);
bool mx_isupper(int c);
bool mx_isdigit(int c);
bool mx_islower(int c);
bool mx_isalpha(int c);
bool mx_isspace(char c);
int mx_xor(int x, int y);
void mx_hexadecimal(void);
bool mx_is_odd(int value);
void mx_matrix_voice(void);
void mx_is_positive(int i);
int mx_sum_digits(int num);
void mx_strdel(char **str);
void mx_print_alphabet(void);
int mx_factorial_iter(int n);
int mx_atoi(const char *str);
// bool mx_is_prime(int num);
void mx_only_printable(void);
void mx_reverse_case(char *s);
// double mx_timer(void(*f)());
void mx_printerr(const char *s);
int mx_max(int a, int b, int c);
int mx_mid(int a, int b, int c);
// bool mx_is_narcissistic(int num);
void mx_sort_arr_int(int *arr, int size);
bool mx_multiple_number(int n, int mult);
int mx_selection_sort(char **arr, int size);
int mx_insertion_sort(char **arr, int size);
int mx_popular_int(const int *arr, int size);
// void mx_pop_index(t_list **list, int index);
int *mx_copy_int_arr(const int *src, int size);
char *mx_substr(const char *str, int a, int b);
void mx_print_arr_int(const int *arr, int size);
int mx_linear_search(char **arr, const char *s);
void mx_arr_rotate(int *arr, int size, int shift);
char *mx_strjoin(const char *s1, const char *s2);
void mx_str_separate(const char *str, char delim);
void mx_isos_triangle(unsigned int length, char c);
int *mx_del_dup_arr(int *src, int src_size,int *dst_size);
// void mx_push_index(t_list **list, void *data, int index);
