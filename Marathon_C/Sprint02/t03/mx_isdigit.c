#include <stdbool.h>
#include <stdio.h>

bool mx_isdigit(int c) {
    if( c >= 48 && c <= 57) {
        return true;
    }
    else {
        return false;
    }
    
//int main() {
//    printf(d%, mx_isdigit(3));
//} 

    
//-------VER-II-------------
// int main(void) {
//     char a = '5';
//     mx_isdigit(a)?printf("true\n"):printf("false\n");
// }
