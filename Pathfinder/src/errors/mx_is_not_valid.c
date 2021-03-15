#include "pathfinder.h"

void mx_is_not_valid(int argc, char *argv[], t_finder *path) {
    for (int i = 0; path->newstr[i] != '\n'; i++) {
        if (!mx_isdigit(path->newstr[i])) {
            mx_printerr("error: line 1 is not valid");
            exit(1);
        }
    }
}
