int mx_strcmp(const char *s1, const char *s2) {
    int n = 1;
    while (n * *s1 * *s2 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    if (!n)
        return 0;
    else
        return *s1 - *s2;
}
