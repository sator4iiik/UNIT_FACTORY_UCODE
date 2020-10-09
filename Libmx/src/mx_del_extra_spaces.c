#include "libmx.h"

static int size_loop(char *str) {
    int len = mx_strlen(str);

    for (int i = 0; str[i] != '\0'; i++)
        if (mx_isspace(str[i]) && mx_isspace(str[i + 1]))
            len--;
        return len;
}

char *mx_del_extra_spaces(const char *str) {
    char *buf_str = NULL;
    char *new = NULL;
    int size = 0;
    int j = 0;

    if (!str)
        return new;
    buf_str = mx_strtrim(str);
    size = size_loop(buf_str);
    new = mx_strnew(size);
    for (int i = 0; buf_str[i] != '\0'; i++) {
        if (mx_isspace(buf_str[i]) && mx_isspace(buf_str[i +1])) {
            while (mx_isspace(buf_str[i]) && mx_isspace(buf_str[i + 1]))
            i++;
        }
        new[j] = buf_str[i];
        j++;
    }
    mx_strdel(&buf_str);
    return new;
}
