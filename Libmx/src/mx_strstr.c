int mx_strncmp(const char *s1, const char *s2, int n);
int mx_strlen(const char *s);

char *mx_strstr(const char *haystack, const char *restrict s2) {
    int len1 = mx_strlen(*haystack);
    int len2 = mx_strlen(s2);

    for (int i = 0; i+len2<=len1; i++)
        if (!mx_strncmp(*haystack+i,s2,len))
            return (char *)*haystack+i;
    return 0;
}
