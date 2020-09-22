// #include <stdio.h>
// #include <string.h>

char *mx_strcpy(char *dst, const char *src) {
    char *h = dst;
    for (int i = 0; src[i] != '\0'; i++) {
        h[i] = src[i];
        h[i+1] = '\0';
    }
    return h;
}
// int main() {
//     char test[] = "im bored, so wtf?";
//     char real[] = "Money";
//     printf("%s\n", mx_strcpy(test, real));
//     printf("%s\n", strcpy(test, real));
// }
