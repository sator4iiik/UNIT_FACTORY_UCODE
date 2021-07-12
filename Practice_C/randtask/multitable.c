#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *multi_table(int num) {
        int i;
        if((num <= 0) || (num >= 11)) {
            printf("unacceptable format: pleace enter number 1 - 10\n");
        }else {
            for(i = 1; i <= 10; i++)
            printf("%d * %d = %d\n", i, num, i * num);
        }

    return calloc(4, sizeof(char)); // return value will be passed to free
}

int main(void) {
    int num;

    scanf("%i", &num);
    multi_table(num);
}
