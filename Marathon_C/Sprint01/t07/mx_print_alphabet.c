void mx_printchar(char c);

void mx_print_alpahabet(void) {
    for (int o = 65; o < 91; o++) {
        if (o % 2 == 1) {           // ничего не понятно но очень
            mx_printchar(o);        // интерестно
        }
        else {
            mx_printchar(o + 32);
        }
    }
    mx_printchar('\n');
}

int main (void) {
    mx_print_alpahabet();
}
