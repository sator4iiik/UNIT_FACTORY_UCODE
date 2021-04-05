#include <unistd.h>

void mx_printstr(const char *s);

void mx_is_positive(int i) {
    if (i > 0) {
        mx_printstr("positive");
    }
    else if (i < 0) {
        mx_printstr("negative");
    }
    else if (i == 0) {
        mx_printstr("zero");
    }
    mx_printstr("\n");
}

// int main(void) {
//     mx_is_positive(123);
//     mx_is_positive(-123);
//     mx_is_positive(0);
// }
