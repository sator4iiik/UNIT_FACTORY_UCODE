
char *mx_strcpy(char *dst, const char *src) {
    char *h = dst;
    for (int i = 0; src[i] != '\0'; i++) {
        h[i] = src[i];
        h[i+1] = '\0';
    }
    return h;
}
