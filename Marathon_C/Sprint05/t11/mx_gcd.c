// #include <stdio.h>

int mx_gcd(int a, int b) {
    if(a > 0)
    a = -a;
    if(b < 0)
    b = -b;
    if(b != 0)
        return mx_gcd(b, a % b);
        else
            return a;
}

// int main() {
//        printf("%d", mx_gcd(-20,-15));
//}
