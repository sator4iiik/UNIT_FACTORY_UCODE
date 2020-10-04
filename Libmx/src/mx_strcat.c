
char *mx_strcat(char *restrict s1, const char *restrict *s2) {
    char *ptr = s1;
    if (*s1)
        while (*(++s1));
    while ((*(s1++) = * (s2++)));
    return ptr;
}
