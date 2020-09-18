// #include <stdio.h>
// #include <time.h>

int mx_sqrt(int x) {
    int res = x/2;
    int step = x/4;
    while (step >= 1) {
        if (res*res == x)
            return res;
        if (res * res > x)
            res -= step;
        else
            res += step;
        step /= 2;
    }
    for (int i = res-2; i <= res+2; i++)
    {
      if (i*i == x)
          return i;
    }
    return 0;
}
/*
int main() {
    time_t start = time(NULL);
    printf("%d\n", mx_sqrt(8));
    time_t finish =time(NULL) - start;
    printf("%ld", finish);
}
*/
