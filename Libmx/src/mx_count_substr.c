#include "libmx.h"

int mx_strncmp(const char *s1, const char *s2, int n);
int mx_strlen(const char *s);

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    int len1 = mx_strlen(str);
    int len2 = mx_strlen(sub);

    for (int i = 0; i+len2<=len1; i++)
        if (!mx_strncmp(str+i,sub,len2))
            count++;
    return count;
}
