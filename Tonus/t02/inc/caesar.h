#ifndef CAESAR_H
#define CAESAR_H

/*                                                 2021
 *                                  w 8
 *      .d8b. 8d8b .d88b 888P 8d8b. w 8.dP .d8b. Yb  dP
 *      8' .8 8P   8.dP'  dP  8P Y8 8 88b  8' .8  YbdP
 *      `Y8P' 8    `Y88P d888 8   8 8 8 Yb `Y8P'   YP
 */

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>



bool mx_isupper(int c);
bool mx_islower(int c);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
int mx_atoi(const char *str);
int mx_strlen(const char *s);
void mx_printerr(const char *s);

#endif
