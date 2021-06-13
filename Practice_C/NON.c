#include <unistd.h>
#include <stdio.h>

void mx_printchar(char c) {
    write(1, &c, 1);
}

int main(void) {
    int n, i, j;
    scanf("%d", &n);

    for(j = 1; j <= n; j++) {
        for(i = 1; i <= n; i++) {
            mx_printchar('*');
            mx_printchar(' ');
            mx_printchar(' ');
            mx_printchar(' ');
        }
    mx_printchar('\n');
    mx_printchar('\n');
    }
}
