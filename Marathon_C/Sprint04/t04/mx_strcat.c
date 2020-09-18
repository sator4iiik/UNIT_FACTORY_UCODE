//#include <stdio.h>
char *mx_strcat(char *s1, const char *s2) {
    char *ptr = s1;
    if (*s1)
        while (*(++s1));
    while ((*(s1++) = *(s2++)));
    return ptr;
}

/*int main() {
    char S1[] = "Ucode";
    const char S[] = "code";
    printf("%s", mx_strcat(S1, S2));
}
*/
