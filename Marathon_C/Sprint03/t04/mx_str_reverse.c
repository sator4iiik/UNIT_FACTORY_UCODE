void mx_swap_char(char *s1, char *s2);
int mx_strlen(const char *s);

void mx_str_reverse(char *s) {
    for (int i = 0; i < mx_strlen(s)/2; i++) {
        mx_swap_char(&s[i],&s[mx_strlen(s)-i-1]);
    }
}

int main(void) {
    // char *a = "Hello World";
    // mx_str_reverse();
    int a = 5;
    int b = 5;

    int c = 3;
    int d = 2;

    int res = (a / b) + (c / d);
}
