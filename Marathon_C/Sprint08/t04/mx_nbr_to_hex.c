#include "get_address.h"

char* mx_nbr_to_hex(unsigned long nbr) {
    char *res = NULL;
    char *hex = NULL;
    int size = 0, temp = 0, i = 0;
    unsigned long len = nbr;

    if(nbr == 0) return "0";
    while (len != 0){
        len /= 16;
        size++;
    }
    res = mx_strnew(size);
    while(nbr != 0){
        temp = nbr % 16;
        if(temp<10){
            res[i] = temp + 48;
            i++;
        }
        else{
            res[i] = temp + 87;
            i++;
        }
        nbr /= 16;
    }
    hex = mx_strnew(size);
    for(int j = i-1, k=0; j>=0; j--, k++){
        hex[k] = res[j];
    }
    free(res);
    return hex;
}

// int main(){
//     printf("%lu\n",mx_hex_to_nbr("C4")); //returns 196
//     printf("%lu\n",mx_hex_to_nbr("FADE")); //returns 64222
//     printf("%lu\n",mx_hex_to_nbr("ffffffffffff")); //returns 281474976710655
//     // system("leaks -q a.out");
// }

