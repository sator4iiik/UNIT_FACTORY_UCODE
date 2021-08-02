#include <stdio.h>

int main () {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf(".....................\n");
    printf("|°F|/////////////|℃ |\n");
    printf("|--+-------------+--|\n");
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        fahr = fahr + step;
        printf("|--| %3.0f -%6.1f |--|\n", fahr, celsius);
    }
    printf("|--+-------------+--|\n");
    printf("|..|/TEMPERATURE/|..|\n");
    printf(".....................\n");
}
