#include <math.h>
#include <stdio.h>

double xrastxDouble(double x1, double y1, double x2, double y2) {
    double res = 0;
    res = fabs(((x2 - x1) * 2) + ((y2 - y1) * 2));
    return res;
}

int main() {
    double x1, y1, x2, y2;
    scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);
    xrastxDouble(x1, x2, y1, y2);
    printf("%3.2lf\n", xrastxDouble(x1, y1, x2, y2));
    return 0;
}


// растояние между 4 осями кординат
// sample input: -70.33 -29.20 9.20 34.09
