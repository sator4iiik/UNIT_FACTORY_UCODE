#ifndef POLYBIUS_H
#define POLYBIUS_H

/*                                                 2021
 *                                  w 8
 *      .d8b. 8d8b .d88b 888P 8d8b. w 8.dP .d8b. Yb  dP
 *      8' .8 8P   8.dP'  dP  8P Y8 8 88b  8' .8  YbdP
 *      `Y8P' 8    `Y88P d888 8   8 8 8 Yb `Y8P'   YP
 */

#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

bool mx_isalpha(int c);
void mx_printchar(char c);
int mx_strlen(const char *s);
void mx_printerr(const char *s);

#endif
