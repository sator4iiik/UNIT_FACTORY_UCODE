#include <stdio.h>

int mx_sqrt(int x) {
    int i = 1;
    for(; i < x; i++) {
        if(i * i == x) {
            return i;
        }
    }
    return 0;
}

int main() {
    printf("%d\n", mx_sqrt(4));
}
