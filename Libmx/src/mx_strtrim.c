// #include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool mx_isspace(char c);
char *mx_strcpy(char *dst, const char *src);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);

char *mx_strtrim(const char *str){
    if(str == NULL){
        return NULL;
    }
    int len = 0, i;
    while(str[len]){
        if(mx_isspace(str[len])){
            len++;
        }
        else{
            break;
        }
    }
    char *buff = mx_strnew(mx_strlen(&str[len]));
    buff = mx_strcpy(buff,&str[len]);
    int len2 = mx_strlen(buff)-1;
    while(buff[len2]){
        if(mx_isspace(buff[len2])){
            len2--;
        }
        else if(buff[len2]=='\0'){len2--;}
        else{
            break;
        }
    }
    char *newstr = mx_strnew(len2);
    for(i = 0; i <= len2; i++){
        newstr[i] = buff[i];
    }
    free(buff);
    return newstr;
}
