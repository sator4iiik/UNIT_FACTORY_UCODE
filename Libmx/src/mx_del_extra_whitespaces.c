#include "libmx.h"

char *mx_del_extra_whitespaces(const char *str) {
    char *finstr = NULL;
    char *newstr = NULL;
    int i = 0;
    int j = 0;

    if (!str)
        return NULL;
    newstr = mx_strtrim(str);
    finstr = mx_strnew(mx_strlen(newstr));
    for(i = 0; i < mx_strlen(newstr)+j; i++){
        if(mx_isspace(newstr[i])){
            if(mx_isspace(newstr[i+1])){
                j++;
            }
            else{
                finstr[i-j] = newstr[i];
            }
        }
        else{
            finstr[i-j] = newstr[i];
        }
    }
    free(newstr);
    return finstr;
}
