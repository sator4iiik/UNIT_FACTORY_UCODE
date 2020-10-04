#include <stdlib.h>
// #include <stdio.h>


int *mx_copy_int_arr(const int *src, int size){
    if(src == NULL ){
        return NULL;
    }
    int *newarr = malloc(size);
    for(int i = 0; i < size; i++){
        newarr[i] = src[i];
    }
    return newarr;
}

