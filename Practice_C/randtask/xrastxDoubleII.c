#include <math.h>
#include <stdio.h>

double xrastxDouble(double x1, double y1, double x2, double y2) {
    double res = 0;
    double   a = 0;
    double   b = 0;

    a = (x1 - x2);
    b = (y1 - y2);

    a = pow(a, 2);
    b = pow(b, 2);

    res = a + b;

    res = sqrt(res);
    return res;
}

int main() {
    double x1, y1, x2, y2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    printf("%3.2lf\n", xrastxDouble(x1, y1, x2, y2));
    return 0;
}

// растояние между 4 осями кординат
// sample input: -70.33 -29.20 9.20 34.09
