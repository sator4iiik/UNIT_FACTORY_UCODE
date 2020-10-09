#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle) {
    int len1 = mx_strlen(haystack);
    int len2 = mx_strlen(needle);

    if (!haystack || !needle)
        return NULL;

    for (int i = 0; i+len2<=len1; i++)
        if (!mx_strncmp(haystack+i,needle,len1))
            return (char *)haystack+i;
    return NULL;
}
