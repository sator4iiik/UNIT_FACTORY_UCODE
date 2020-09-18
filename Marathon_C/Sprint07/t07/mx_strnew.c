#include <stdio.h>
#include <stdlib.h>

char *mx_strnew(const int size) {

    int N;
    printf("Enter size of array to create:");
    scanf("%d", &N);
    
    char *A = (char *)malloc(N);
    if (NULL == A)
    {
        printf("OS didn't gave memory. Exit...\n");
        exit(1);
    }
    for (int i = 0; i < N; ++i)
        A[i] = i;
}

// int main(){
//     // printf("%s",mx_strnew(10)); //returns string with size 10 and terminated by'\0'
//     // printf("%s",mx_strnew(-1)); //returns NULL

// }
