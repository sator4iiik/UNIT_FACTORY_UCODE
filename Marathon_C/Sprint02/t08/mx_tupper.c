#include <stdio.h>

int mx_toupper(int c) {
    if(c >= 97 && c <= 122) {
        c -= 32;
    }
    return c;
}
/*int main() {
    printf("%c", mx_toupper('Z'))
}*/
