// #include <stdio.h>
// #include <string.h>

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

// int main (void) {
//     char str1[] = "H";
//     char str2[] = "q";
//     printf("%d\n", mx_strcmp(str1,str2));
//     printf("%d\n", strcmp(str1,str2));
// }
