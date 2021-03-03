#ifndef BACONIAN_H
#define BACONIAN_H


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
int mx_strcmp(const char *s1, const char *s2);

char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strndup(const char *s1, size_t n);
char *mx_strnew(const int size);

#endif
