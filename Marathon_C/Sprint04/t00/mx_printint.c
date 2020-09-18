void mx_printchar(const char c);

void mx_printint(int n) {
    if (n < 0) {
        mx_printchar('_');
        n *= -1;
    }
    if (n > 9) {
        mx_printint(n/10);
        mx_printchar('0' + (n % 10));
    }
    else {
        mx_printchar('0' + (n % 10));
    }
}

/*int main() {
    mx_printint(2147483647);
}
*/
