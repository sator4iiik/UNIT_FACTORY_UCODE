// #include <stdio.h>
#include <stdlib.h>

char *mx_sternew(const int size) {
    char *temp = NULL;

    if (size > 0){
        temp = malloc(size + 1);
        temp[size] = '\0';
    }
    return temp;
}

char* mx_nbr_to_hex(unsigned long nbr) {
    char *res = NULL;
    char *hex = NULL;
    int size = 0, temp = 0, i = 0;
    unsigned long len = nbr;

    if(nbr == 0) return "0";
    while (len != 0) {
        len /= 16;
        size++;
    }
    res = mx_strnew(size);
    while(nbr != 0) {
        temp = nbr % 16;
        if(temp<10) {
            res[i] = temp + 48;
            i++;
        }
        else {
            res[i] = temp + 87;
            i++;
        }
        nbr /= 16;
    }
    hex = mx_strnew(size);
    for(int j = i-1, k=0; j>=0; j--, k++) {
        hex[k] = res[j];
    }
    free(res);
    return hex;
}

/* int main() {
    printf("%s\n", mx_nbr_to_hex(5)); //returns "34"
    printf("%s", mx_nbr_to_hex(1000)); //returns "3e8"
}
*/
