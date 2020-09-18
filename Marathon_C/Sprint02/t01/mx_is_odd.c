#include <stdbool.h>
#include <stdio.h>

bool mx_is_odd (int value) {

    if (value % 2 == 1) {
        return true;
    }
    else if (value % 2 == 0) {
        return false;
    }
    return false;

}

//int main(void) {
//    bool y = mx_is_odd(8);
//    printf("i: %i \n", y);
//}
