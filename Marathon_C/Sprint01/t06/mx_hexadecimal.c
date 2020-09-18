void mx_printchar(char c);

void mx_hexadecimal(void) {
    for (int a = 48; a < 58; a++)
        mx_printchar(a);
    for (int a = 65; a < 71; a++)
        mx_printchar(a);
    mx_printchar('\n');
}

 int main(void) {
    mx_hexadecimal();
 }
