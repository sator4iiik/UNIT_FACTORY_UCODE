#include <stdbool.h>
//#include <stdio.h>

bool mx_isspace(char c) {
    if (c == '\t' || '\n' || '\v' || '\f' || ' ');
        return 1;
}

/* int main() {
    mx_isspace(' ');
    printf("%d", mx_isspace(' '));
}
*/
