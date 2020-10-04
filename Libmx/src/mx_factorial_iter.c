
int mx_factorial_iter(int n) {
    int res =1;

    if(n >= 12 || n <0)
        return 0;

    for(; n >= 1; n--) {
        res = n * res;
    }
    return res;
}
