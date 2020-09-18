#include <stdbool.h>

bool mx_isspace(char c) {
    if (c == '\t' || '\n' || '\v' || '\f' || ' ')
        return 1;
}
