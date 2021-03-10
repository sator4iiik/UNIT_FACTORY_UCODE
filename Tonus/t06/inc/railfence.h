#ifndef RAILFENCE_H
#define RAILFENCE_H

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
// #include <stdio.h>

bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
int mx_atoi(const char *str);
int mx_strlen(const char *s);
void mx_printerr(const char *s);

#endif
