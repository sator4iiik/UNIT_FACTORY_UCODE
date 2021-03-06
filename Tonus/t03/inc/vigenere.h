#ifndef VIGENERE_H
#define VIGENERE_H

/*                                                 2021
 *                                  w 8
 *      .d8b. 8d8b .d88b 888P 8d8b. w 8.dP .d8b. Yb  dP
 *      8' .8 8P   8.dP'  dP  8P Y8 8 88b  8' .8  YbdP
 *      `Y8P' 8    `Y88P d888 8   8 8 8 Yb `Y8P'   YP
 */

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

bool mx_isalpha(int c);
bool mx_isupper(int c);
bool mx_islower(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printerr(const char *s);
int mx_strlen(const char *s);

#endif
