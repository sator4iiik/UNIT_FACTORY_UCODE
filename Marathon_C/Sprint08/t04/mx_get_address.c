#include "get_address.h"

char* mx_get_address(void *p){
    char *newstr = mx_strnew(mx_strlen(p));
    return mx_nbr_to_hex(*(int*)&newstr);
}

// int main(){
//     char *str = "qwertyuio";
//     printf("%s",mx_get_address(str));
// }
