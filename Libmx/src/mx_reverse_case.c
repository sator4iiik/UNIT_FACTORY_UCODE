#include <stdbool.h>

int mx_tolower(int c);
int mx_toupper(int c);
bool mx_isupper(int c);
bool mx_islower(int c);

void mx_reverse_case(char *s) {
    int i = 0;

    while (s[i] != '\0') {
        if (mx_isupper(s[i]))
            s[i] = mx_tolower(s[i]);
        else if (mx_islower(s[i]))
            s[i] = mx_toupper(s[i]);
        i++;
    }
}
