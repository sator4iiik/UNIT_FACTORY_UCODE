void mx_swap_char(char *s1, char *s2);
int mx_strlen(const char *s);

void mx_str_reverse(char *s) {
    if (s == (NULL)) {
        return;
    }
    for (int i = 0; i < mx_strlen(s)/2; i++) {
        mx_swap_char(&s[i],&s[mx_strlen(s)-i-1]);
    }
}
