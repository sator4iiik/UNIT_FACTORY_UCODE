char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);
int mx_strlen(const char *s);

char *mx_strdup(const char *str) {
    char *copy = mx_strnew(mx_strlen(str));
    copy = mx_strcpy(copy, str);
    return copy;
}
