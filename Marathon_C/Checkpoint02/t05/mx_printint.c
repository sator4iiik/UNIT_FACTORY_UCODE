mx_printint(int n) {
    if (n<0) {
        n= -n;
        write(1 ,' ', 1);
    }
    if(n/10 !=0)
        mx_printint(n/10);
    write(1, n%10 + 48, 1);
}
/*int main() {
    mx_printint(2147483647);
}
*/
