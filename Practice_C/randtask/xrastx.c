#include <stdio.h>
#include <math.h>

int main() {
    int x1, x2, res;
    scanf("%d%d", &x1, &x2);
    res = (int)fabs(x2-x1);

    printf("%d\n", res);

    return 0;
}

// растояние между двумя осями кординат
