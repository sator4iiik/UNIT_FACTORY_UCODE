#include "libmx.h"

static int mx_strlen2(const char *s) {
    int i = 0;

    if (s)
        while (s[i] != '\0')
            i++;
    return i;
}

static char *mx_inverse_strndup(const char *src, int n) {
    char *dst = mx_strnew(mx_strlen2(src) - n);

    for (int i = 0; src[i + n]; i++)
        dst[i] = src[i + n];
    return dst;
}

static char *mx_parse_leftovers(char *leftovers, char ***lineptr,
                                                        char delim) {
    char *temp = leftovers;
    int i;
    if (!leftovers || !mx_strlen2(leftovers))
        return NULL;
    for (i = 0; i < mx_strlen(leftovers) && leftovers[i] != delim; i++);
    **lineptr = mx_strndup(leftovers, i);
    leftovers = mx_inverse_strndup(leftovers, i + 1);
    free(temp);
    return leftovers;
}

static bool mx_delim_check(char *buf, int *rd, char delim) {
    for (int i = 0; i < *(rd); i++) {
        if (buf[i] == delim) {
            *(rd) = i;
            return true;
        }
    }
    return false;
}

int mx_read_line(char **lineptr, size_t buf_size, char delim,
                                                    const int fd) {
    char buf[buf_size];
    int rd = buf_size;
    bool delim_check = false;
    static char *leftovers;

    if(fd == -1 || read(fd, NULL, 0))
        return -2;
    if (*lineptr)
        mx_strdel(lineptr);
    leftovers = mx_parse_leftovers(leftovers, &lineptr, delim);
    if (leftovers)
        return mx_strlen2(*lineptr);
    while (rd == (int)buf_size && !delim_check) {
        rd = read(fd, buf, buf_size);
        if (rd < (int)buf_size)
            buf[rd] = '\0';
        delim_check = mx_delim_check(buf, &rd, delim);
        *lineptr = mx_strnjoin(*lineptr, buf, mx_strlen2(*lineptr), rd);
    }
    free(leftovers);
    if (delim_check)
        leftovers = mx_inverse_strndup(buf, rd + 1);
    if (rd == 0)
        return -1;
    // free(leftovers);
    return mx_strlen2(*lineptr);
}
