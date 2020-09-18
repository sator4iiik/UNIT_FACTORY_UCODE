void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
#include <stdio.h>

int main(int argc, char *argv[]) {

    int i;
    
    {
        int count = 0;
        for(i = 0; i < argc; i++) {
            if (i==0) {
                mx_printstr(argv[0]);
                mx_printchar('\n');
            }
            count++;
        }

        mx_printint(count);
        mx_printchar('\n');
    }
    return 0;
}
