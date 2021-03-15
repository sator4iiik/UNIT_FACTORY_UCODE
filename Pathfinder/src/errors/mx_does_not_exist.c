#include "pathfinder.h"

void mx_does_not_exist(int argc, char *argv[], t_finder *path) {
    int i = open(argv[1], O_RDONLY);
    if (i < 0) {
        mx_printerr("error: file ");
        mx_printerr(argv[1]);
        mx_printerr(" does not exist\n");
        close(i);
        exit(1);
    }
    close(i);
}
