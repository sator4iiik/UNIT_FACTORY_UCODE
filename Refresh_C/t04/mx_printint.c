#include <stdio.h>
#include <unistd.h>

void mx_printchar(char c);

void mx_printint(int n) {
    // if (n == -2147483648) {
    //     write(1, "-2147483648", 12);
    //     return;
    //}
    if (n<0) {
        n= -n;
        mx_printchar('-');
    }
    if(n/10 != 0)
        mx_printint(n/10);
    mx_printchar(n%10 + 48);
}

// int main() {
//     mx_printint(2147483647);
//     mx_printchar('\n');
//     mx_printint(-2147483648);
//     mx_printchar('\n');
//     mx_printint(0);
//     mx_printchar('\n');
//     mx_printint(-6582);
//     mx_printchar('\n');
// }
//
