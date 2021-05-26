#include "pathfinder.h"

void mx_line1_validation(char *argv[], t_finder *path) {
    for (int i = 0; *path->string != '\n'; path-> string++) {
        if (!mx_isdigit(*path->string)) {
            mx_print_errline(path, 1);
        }
    }
    path->string++;
}
