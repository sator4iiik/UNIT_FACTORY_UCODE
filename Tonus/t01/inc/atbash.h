/*                                                 2021
 *                                  w 8
 *      .d8b. 8d8b .d88b 888P 8d8b. w 8.dP .d8b. Yb  dP
 *      8' .8 8P   8.dP'  dP  8P Y8 8 88b  8' .8  YbdP
 *      `Y8P' 8    `Y88P d888 8   8 8 8 Yb `Y8P'   YP
 */

#ifndef ATBASH_H
#define ATBASH_H

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>

void mx_printstr(const char *s);
void mx_printerr(const char *s);

bool mx_isspace(char c);
bool mx_isupper(int c);
bool mx_isalpha(int c);
bool mx_islower(int c);


/////////////--STR--//////////////
char* mx_strnew(const int size);
int mx_strlen(const char *s);

#endif
