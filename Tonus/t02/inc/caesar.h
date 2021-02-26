#ifndef CAESAR_H
#define CAESAR_H

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

////////////-ERR-///////////////
void mx_printerr(const char *s);

bool mx_isupper(int c);
bool mx_islower(int c);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
int mx_strlen(const char *s);
void mx_printchar(char c);


#endif

