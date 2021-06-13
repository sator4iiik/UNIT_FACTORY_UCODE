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


int main(void) {
    int num = 0;

    scanf("&num");

    if ((num & 1) == 1)
        mx_printstr("Odd\n");
    else
        mx_printstr("Even\n");

	        return 0;
}
