#include <stdio.h>
#include <unistd.h>
#include <string.h>

int mx_strlen(const char *s) {
    int len = 0;

    while (s[len] != '\0')
        len++;
    return len;
}

void mx_printchar(char c) {
    write(1, &c, 1);
}

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}


int main() {
    int n, i, j;

    mx_printstr("(ﾉ´ヮ)ﾉ*:  ･ﾟ✦\nprint size X:");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        for(j = 1; j <= n; j++) {

            if( i == j || i + j == n + 1)
                mx_printstr("*");
            else
                mx_printstr(" ");
        }
        mx_printstr("\n");
    }
    return 0;
}
