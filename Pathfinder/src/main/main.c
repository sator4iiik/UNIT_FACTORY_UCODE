#include "pathfinder.h"

int main(int argc, char *argv[]) {
    t_finder *path = malloc(sizeof *path);
    if (argc == 2) {
        mx_does_not_exist(argc, argv, path);
        mx_is_empty(argc, argv, path);
        mx_is_not_valid(argc, argv, path);
    }
    else {
        mx_printerr(ERROR_USAGE);
    }
    free(path);
    return 0;
}
