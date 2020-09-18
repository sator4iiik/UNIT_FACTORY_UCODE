int mx_strncmp(const char *s1, const char *s2, int n) {
    while (n * *s1 * *s2 && (*s1 == *s2)) {
        s1++;
        s2++;
        n--;
    }
    if (!n)
        return 0;
    else
        return *s1 - *s2;
}
/*int main() {
    char user[] = "unit codes";
    char sys[] = "unit code";
    printf("%d", mx_strncmp(user,sys, 10));  
}
*/
