#ifndef MLIB_H
#define MLIB_H

#include <sys/types.h>
#include <stdlib.h>

int mx_strlen(const char *s);
int **mx_strsplit(const char *s, char c);
int mx_read_line(char **lineptr, int buf_size, char delim, const int fd);
char *mx_strjoin2(char *s1, char *s2);

#endif
