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

// int main(){
//     // int arr1[] = {1, 2, 3};
//     int *arr2 = NULL;
//     // int *new = mx_copy_int_arr(arr1, 3); //returns array [1, 2, 3]
//     // for(int i = 0; i<3; i++){
//     //   printf("%d ", new[i]);
//     // }
//     mx_copy_int_arr(arr2, 3);
//     // for(int i = 0; i<3; i++){
//     //     printf("%s ", new[i]);
//     // }
//     // printf("%s",new);
// }

