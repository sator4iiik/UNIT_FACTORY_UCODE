#include <stdbool.h>
#include <ctype.h>

bool mx_isalpha(int c) {
    if ((c= 65 && c<=90) || (c >=97 && c <=122))
        return true;
    else
        return false;
}

// int main(void) {
//     int f = 70;
//     mx_isalpha(f)?printf("true\n"):printf("false\n");
// }


// #include <stdio.h>
// #include <stdbool.h>

// bool mx_isalpha(int c) {
//     if (65 <= c && c <= 90)
//         return true;
//     else if (97 <= c && c <= 122)
//         return true;
//     else
//         return false;

// }

