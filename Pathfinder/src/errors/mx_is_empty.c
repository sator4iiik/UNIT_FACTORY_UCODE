#include "pathfinder.h"

void mx_is_empty(int argc, char *argv[], t_finder *path) {
    path->newstr = mx_file_to_str(argv[1]);
    if (path->newstr == NULL) {
        mx_printerr("error: file ");
        mx_printerr(argv[1]);
        mx_printerr(" is empty\n");
        exit(1);
    }
}
