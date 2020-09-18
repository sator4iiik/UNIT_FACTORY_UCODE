// #include <stdio.h>

int mx_factorial_iter(int n) {
    int result = 1;
    if (n > 0) {
        if(result <= 2147483647) {
            for (int i=1; i <= n; i++) {
                result = result * i;
                }
        }
        return result;
    }
    return 0;
}

// int main () {
//     printf ("%d\n", mx_factorial_iter(5));
//}
