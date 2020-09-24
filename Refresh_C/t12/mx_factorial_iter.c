// #include <stdio.h>

int mx_factorial_iter(int n) {
    int res = 1;
// говорим что результат равен 1
    if(n >= 12 || n < 0)
        return 0;
//если число больше или равно 12 или меньше 0 вернуть ноль как ошибку
    for(; n >= 1; n--) {
        res = n * res;
    }
    return res;
} //дтпп н число больше 1 отнимать 1  и прод цикл
// результат равен чсило умноженное на результат
// int main(void) {
//     printf("%d\n", mx_factorial_iter(11));
// }
