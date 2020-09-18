int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);

int main(int argc, char *argv[]) {
    int n = 0;
    int res[32];

    for (int y = 1; y < argc; y++) {
        n = mx_atoi(argv[y]);
        for (int i = 31; i >= 0; i--) {
            int k = n >> i;
            if (k & 1)
                res[i] = 1;
            else
            {
                res[i] = 0;
        // }
        // for (int i = 31; i >= 0; i--)
                mx_printint(res[i]);
            }
            mx_printchar('\n');
    }

    return 0;
}
