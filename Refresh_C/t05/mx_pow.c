// #include <stdio.h>
// #include <math.h>

double mx_pow(double n, unsigned int pow) {
    double j=1;

    for(unsigned int i = 1; i <= pow; i++) {
        j=j*n;
    }
    return j;
}

// int main() {
//     double h = 2.5;
//     unsigned int l = 3;
//     printf("%.3f v stepeni %d ravno : %.3f\n", h,l, mx_pow(h, l));
// }
