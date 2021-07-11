#include <stdio.h>

int main() {
    int a;
    double pi = 3.1415926, rad;
    scanf("%d", &a);
    rad = (a * pi) / 180;

    printf("%1.2lf\n", rad);
    return 0;
}

// перевод углa из градусной меры в радианную.
