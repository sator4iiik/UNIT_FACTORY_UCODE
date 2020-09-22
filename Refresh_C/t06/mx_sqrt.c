// #include <stdio.h>

int mx_sqrt(int x) {
    if(x==0)
    return 1;

    // if(x==46340)
    // return 0;

    for(int i = 1; i < x && i < 46340; i++) {
        if(i * i == x) {
            return i;
        }
    }
    return 0;
}

// int main(void) {
//     printf("%d\n", mx_sqrt(4));
// }
