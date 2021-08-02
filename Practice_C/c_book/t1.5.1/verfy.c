#include <stdio.h>


int main() {
    
    char value;
    int c;

    value = ((c = getchar()) != EOF);
    printf("%i\n", value);
        return 0;
}
