void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    char new_line_fl = 0;
    while (*str){
        if (*str == delim) {
            if(!new_line_fl) {
                mx_printchar('\n');
                new_line_fl = 1;
            }
        }
        else {
            mx_printchar(*str);
            new_line_fl = 0;
        }
        str++;
    }
    mx_printchar('\n');
}
