
int mx_sqrt(int x) {
    if(x==0)
    return 1;

    for(int i = 1; i < x && i < 46340; i++) {
        if(i * i == x) {
            return i;
        }
    }
    return 0;
}
