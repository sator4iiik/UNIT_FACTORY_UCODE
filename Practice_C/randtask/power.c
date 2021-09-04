#include <stdio.h>

int power(int base, int n){
    int i, p = 1;

    if (base <= 0) {
        return 0;
    }else{
    for (i = 1; i <= n ; ++i)
        p = p * base;

    return p;
    }

}

int main(void){
    printf("%d\n", power(-3, 10));
    return 0;
}
