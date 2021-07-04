#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

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
	         ft_putchar(o);
                 ft_putchar(d);
		 ft_putchar(t);
		 if (o != '7' || d != '8' || t != '9') {
		 
                 ft_putchar(',');
		 ft_putchar(' ');
		}
		 t++;
	    }
	}
    }
}

int main() {
	ft_print_comb();
	ft_putchar('\n');
}
