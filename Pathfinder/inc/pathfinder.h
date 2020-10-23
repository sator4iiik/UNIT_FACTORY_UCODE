#ifndef PATHFINDER
#define PATHFINDER

#include "libmx.h"

#define INT_MAX 2147483647

#define ERROR_USAGE "usage: ./pathfinder [filename]\n"
#define ERROR_USAGE "error: file [filename] does not exist"

typedef struct s_finder {
    int fd;
}              t_finder;

// Validation of errors
void mx_wrong_args_or_file(int args, char *argsv[], t_finder *path);

#endif
