#include <stdlib.h>
// #include <stdio.h>
#include <stdbool.h>

char *mx_strnew(const int size);
int mx_count_words(const char *str, char c);
void mx_strdel(char **str);
char *mx_strncpy(char *dst, const char *src, int len);

static int count_len_sub(const char *s, char c) {
    int res = 0;

    while (s[res] && s[res] != c)
        res++;
    return res;
}

char **mx_strsplit(char const *s, char c){
    int  i = 0, /*len = 0, cntc = 0,*/ count = mx_count_words(s, c);
    //char str[1024];
    int y = 0;
    int g = 0;
    // char *arr[count];
    char **res = (char **)malloc(sizeof(char *) * count + 1);

    for (i = 0; i < count; i++) {
        res[i] = mx_strnew(count_len_sub(s, c));
        if (s[y] == c) {
            y++;
        }
        g = 0;
        while(s[y] != '\0' && s[y] != c) {
            res[i][g] = s[y];
            y++;
            g++;
        }
    }
    res[i] = NULL;
    // while(s[i]){
    //     if(s[i]==c){
    //         cntc++; 
    //         i++;
    //     }
    //     else{
    //         str[i-cntc] = s[i];
    //         if(s[i+1]==c){
    //             printf("%s \n",str);
    //             // arr[len] = str;
    //             // str[];
    //             len++;
    //             i++;
    //         }
    //         i++;
    //     }     
    // }
    // free(str);
    return res;   
}

// int main(){
//     char s[] = "123*45*678*9";
//     char **test = mx_strsplit(s, '*');// arr = ["Good bye,", "Mr.", "Anderson."
//     int g = 0;
//     while (test[g]) {
//         printf("%s ", test[g]);
//         g++;
//     }
//     // system("leaks -q a.out");
// }

