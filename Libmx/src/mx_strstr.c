#include "libmx.h"

int mx_strncmp(const char *s1, const char *s2, int n);
int mx_strlen(const char *s);

char *mx_strstr(const char *s1, const char *s2) {
    int len1 = mx_strlen(s1);
    int len2 = mx_strlen(s2);

    for (int i = 0; i+len2<=len1; i++)
        if (!mx_strncmp(s1+i,s2,len1))
            return (char *)s1+i;
    return;
}
