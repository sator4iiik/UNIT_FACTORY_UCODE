#include <stdio.h>

void mx_swap_char(char *s1, char *s2) {
    char c = *s1;
    *s1 = *s2;
    *s2 = c;
}

/*int main() {
    char c[] = "NEO\n";

    mx_swap_char(c);
    printf(char *s1, char *s2);
}*/
