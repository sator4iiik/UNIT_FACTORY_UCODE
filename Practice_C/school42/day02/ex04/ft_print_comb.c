
void mx_printchar(char c);

void ft_print_comb(void) {
    char o;
    char d;
    char t;

    o = '0' - 1;
    while (++o <= '9') {
        d = o;
        while(++d <= '9') {
        t = d +1;
        while (t <= '9') {
            mx_printchar(o);
                mx_printchar(d);
        mx_printchar(t);
        if (o != '7' || d != '8' || t != '9') {

        mx_printchar(',');
        mx_printchar(' ');
        }
        t++;
        }
    }
    }
}

/*
 * int main() {
 *  	ft_print_comb();
 *	    mx_printchar('\n');
 * }
 */
