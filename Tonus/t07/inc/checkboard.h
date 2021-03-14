#ifndef CHECKBOARD_H
#define CHECKBOARD_H

/*                                                 2021
 *                                  w 8
 *      .d8b. 8d8b .d88b 888P 8d8b. w 8.dP .d8b. Yb  dP
 *      8' .8 8P   8.dP'  dP  8P Y8 8 88b  8' .8  YbdP
 *      `Y8P' 8    `Y88P d888 8   8 8 8 Yb `Y8P'   YP
 */

#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_strlen(const char *s);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printerr(const char *s);
char *mx_strnew(const int size);
char *mx_strcat(char *s1, const char *s2);
char *mx_strndup(const char *s1, unsigned long n);
char *mx_strncpy(char *dst, const char *src, int len);

#endif
