#ifndef MORSE_H
#define MORSE_H

/*                                                 2020
 *                                  w 8
 *      .d8b. 8d8b .d88b 888P 8d8b. w 8.dP .d8b. Yb  dP
 *      8' .8 8P   8.dP'  dP  8P Y8 8 88b  8' .8  YbdP
 *      `Y8P' 8    `Y88P d888 8   8 8 8 Yb `Y8P'   YP
 */

#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printerr(const char *s);
char *mx_strnew(const int size);
char *mx_strndup(const char *s1, size_t n);
int mx_count_words(const char *str, char c);
int mx_strcmp(const char *s1, const char *s2);
char *mx_strncpy(char *dst, const char *src, int len);
char **mx_strsplit(char const *s, char c);

#endif
