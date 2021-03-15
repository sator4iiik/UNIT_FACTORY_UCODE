#ifndef PATHFINDER
#define PATHFINDER

#include "libmx.h"

#define INT_MAX 2147483647

#define ERROR_USAGE "usage: ./pathfinder [filename]\n"

typedef struct s_finder {
    char *newstr;
}              t_finder;

// Validation of errors
void mx_wrong_args_or_file(int args, char *argv[], t_finder *path);
void mx_does_not_exist(int argc, char *argv[], t_finder *path);
void mx_is_not_valid(int argc, char *argv[], t_finder *path);
void mx_is_empty(int argc, char *argv[], t_finder *path);

#endif
