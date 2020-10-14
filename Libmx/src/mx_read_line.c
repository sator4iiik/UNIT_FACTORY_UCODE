#include "libmx.h"

static int mx_strlen2(const char *s) {
    int i = 0;

    if (s)
        while (s[i] != '\0')
            i++;
    return i;
}

// static char *mx_inverse_strndup(const char *src, int n) {
//     char *dst = NULL;

//     if ((mx_strlen2(src) - n) <= 0)
//         return NULL;
//     dst = mx_strnew(mx_strlen2(src) - n);
//     for (int i = 0; src[i + n]; i++)
//         dst[i] = src[i + n];
//     return dst;
// }

// static int mx_parse_leftovers(char **leftovers, char ***lineptr, char delim) {
//     char *temp = *leftovers;
//     int l = mx_strlen2(*leftovers);
//     int i;

//     if (!*leftovers)
//         return 0;
//     for (i = 0; i < l && temp[i] != delim; i++);
//     **lineptr = mx_strndup(*leftovers, i);
//     *leftovers = mx_inverse_strndup(*leftovers, i + 1);
//     free(temp);
//     return i;
// }

// static bool mx_delim_check(char *buff, int *rd, char delim) {
//     for (int i = 0; i < *(rd); i++)
//         if (buff[i] == delim) {
//             *(rd) = i;
//             return true;
//         }
//     return false;
// }

// static char *mx_strn2join(char *s1, char *s2, int l2) {
//     if (!s2 || !l2)
//         return s1;

//     int l1 = mx_strlen2(s1);
//     char *copy = NULL;
//     copy = mx_strnew(l1 + l2 + 1);
//     copy = mx_strncpy(copy, s1, l1);
//     for (int i = 0; i < l2; i++)
//         copy[i + l1] = s2[i];
//     free(s1);
//     return copy;
// }

// int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
//     int l_count;
//     int rd = buf_size;
//     char buff[buf_size];
//     bool d_check = false;
//     static char *leftovers;

//     l_count = mx_parse_leftovers(&leftovers, &lineptr, delim);
//     if (leftovers)
//         return l_count;
//     if (read(fd, NULL, 0) < 0 || fd == -1)
//         return -2;
//     while (rd == (int)buf_size && !d_check) {
//         rd = read(fd, buff, buf_size);
//         if (rd < (int)buf_size)
//             buff[rd] = '\0';
//         d_check = mx_delim_check(buff, &rd, delim);
//         *lineptr = mx_strn2join(*lineptr, buff, rd);
//     }
//     free(leftovers);
//     if (d_check)
//         leftovers = mx_inverse_strndup(buff, rd + 1);
//     else if (!rd && !l_count)
//         return -1;
//     return mx_strlen2(*lineptr);;
// }

static char *mx_inverse_strndup(const char *src, int n) {
    char *dst = NULL;

    if ((mx_strlen2(src) - n) <= 0)
        return NULL;
    dst = mx_strnew(mx_strlen2(src) - n);
    for (int i = 0; src[i + n]; i++)
        dst[i] = src[i + n];
    return dst;
}

static int mx_parse_leftovers(char **lo, char ***lineptr, char delim) {
    char *temp = *lo;
    int l = mx_strlen2(*lo);
    int i;

    if (!*lo)
        return 0;
    mx_strdel(*lineptr);
    for (i = 0; i < l && temp[i] != delim; i++);
    **lineptr = mx_strndup(temp, i);
    *lo = mx_inverse_strndup(*lo, i + 1);
    free(temp);
    return i;
}

static bool mx_delim_check(char *buff, int buf_size, int *rd, char delim) {
    if (*rd < buf_size)
        buff[*rd] = '\0';
    for (int i = 0; i < *(rd); i++)
        if (buff[i] == delim) {
            *(rd) = i;
            return true;
        }
    return false;
}

static char *mx_strn2join(char **lptr, char *s2, int rd, bool *b) {
    char *tmp = *lptr;
    char *res = NULL;
    int l1 = mx_strlen2(*lptr);

    if (!s2 || !rd)
        return *lptr;
    if (*b) {
        res = mx_strnew(l1 + rd);
        for (int i = 0; i < l1; i++)
            res[i] = tmp[i];
        for (int i = 0; i < rd; i++)
            res[i + l1] = s2[i];
    }
    else {
        res = mx_strndup(s2, rd);
        *b = true;
    }
    mx_strdel(&tmp);
    return res;
}

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
    int l_count = 0;
    // int count = 0;
    int rd = buf_size;
    bool d_check = false;
    bool lptr_check = false;
    static char *leftovers;
    char buff[buf_size];

    // buff[buf_size] = '\n';
    buff[buf_size] = '\0';
    l_count = mx_parse_leftovers(&leftovers, &lineptr, delim);
    lptr_check = (l_count > 0);
    if (leftovers)
        // mx_printstr("\n");
        // *lineptr[l_count] = '\n';
        return l_count;
    if (read(fd, NULL, 0) < 0 || fd == -1)
        return -2;
    while (rd == (int)buf_size && !d_check) {
        rd = read(fd, buff, buf_size);
        d_check = mx_delim_check(buff, (int)buf_size, &rd, delim);
        *lineptr = mx_strn2join(lineptr, buff, rd, &lptr_check);
    }
    free(leftovers);
    if (d_check)
        leftovers = mx_inverse_strndup(buff, rd + 1);
    if (!rd && !l_count && !d_check)
        return -1;
    mx_printstr("\n");
    // count = mx_strlen(*lineptr);
    // *lineptr[count] = '\n';
    return mx_strlen(*lineptr);
}
