// #include <stdio.h>
#include <stdlib.h>


int *mx_copy_int_arr(const int *src, int size);
int *mx_del_dup_arr(int *src, int src_size,int *dst_size){
    if ( src_size <=0 || *dst_size <=0 || src==NULL){
        return NULL;
    }
    int *bruh = malloc(*dst_size);
    bruh = mx_copy_int_arr(src,src_size);
    int j=0;
    for (int i=0; i<src_size; i++){
        if (src[i]==src[i+1]){}
        else {
            bruh[j]=src[i];
            j++;
        }
    }
    return bruh;
}


// int main(){
//     int art[]={1,2,3,4,5,6,6,6,7,7};
//     int size=7;
//     int *size1 = &size;
//     int *new=mx_del_dup_arr(art,10,size1);
//     for (int j=0; j<size; j++){
//         printf("%d",new[j]);
//     }
// }
