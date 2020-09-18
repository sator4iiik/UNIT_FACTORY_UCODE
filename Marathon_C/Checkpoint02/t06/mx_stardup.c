#include <unistd.h>
#include <stdlib.h>

int mx_strlen(const char *s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

char *mx_strcpy(char *dst, const char *src) {
    int len = 0;
    while(src[len]) {
        len++;
    }
    for(int i = 0; i < len; i++) {
        if(src[i] == '\0') {
            break;
        }
        else {
            dst[i]=src[i];
        }
    }
    return dst;
}

char *mx_strnew(const int size) {
    char *temp = NULL;
    if (size > 0) {
        *temp = malloc(size +1);
        temp[size] = '\0';
    }
    return temp;
}

char *mx_stardup(const char *str) {
    char *newstr = mx_strnew(mx_strlen(str));
    mx_strcpy(newstr,str);
    return newstr;
}

