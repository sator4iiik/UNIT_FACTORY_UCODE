// #include <stdio.h>

char *mx_strchr(const char *s, int c) {
    while (*s != (char)c)
        if(!*s++)
            return 0;
    return (char *)s;
}

/* int main() {
    const char str[] = "What are you doing?";
    int letter = 'f';
    printf("%s", mx_strchr(str, letter))
}*/
