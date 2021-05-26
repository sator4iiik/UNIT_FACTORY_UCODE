#include "pathfinder.h"

void mx_all_errors(int argc, char *argv[], t_finder *path) {
    char *buf;

    mx_invalid_argc_or_file(argc, argv, path);
    mx_error_empty_file(argv, path);
    buf = path->string;
    mx_line1_validation(argv, path);
    mx_line_next_validation(path);
    path->string = buf;
    mx_invalid_islands(path);
}
