#ifndef VIGENERE_H
#define VIGENERE_H

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
