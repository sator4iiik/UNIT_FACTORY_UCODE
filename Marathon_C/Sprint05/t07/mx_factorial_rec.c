// #include <stdio.h>

int mx_factorial_rec(int n) {
    if (n == 0 || n == 1) return 1;
    return n * mx_factorial_rec(n - 1);
}

// int main () {
//     printf ("%d\n", mx_factorial_rec(5));
//}
