#include "../inc/mxlib.h"


/*
 *                                     w 8
 *         .d8b. 8d8b .d88b 888P 8d8b. w 8.dP .d8b. Yb  dP
 *         8' .8 8P   8.dP'  dP  8P Y8 8 88b  8' .8  YbdP
 *         `Y8P' 8    `Y88P d888 8   8 8 8 Yb `Y8P'   YP
 */

int main(int argc, char *args[]) {
    if(argc == 2) {
	char *alfabet[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
	"k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x",
    "y", "z", " ", ".", NULL};

	char *morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....",
	"..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...",
	"-", "..-", "...-", ".--", "-..-", "-.--", "--..", "55555", NULL};

	char *str = args[1];
	char s = ' ';

	int len = 0;
	while (morse[len] != NULL) {
		len++;

	}
	for (int i = 0; i < mx_strlen(str); i++) {
		if(str[i] == s && str[i+1] == s) {
			str[i+1] = '5';
		}
		if(str[i] == '5' && str[i+1] == s && str[i+2] == s) {
			str[i+1] = '5';
		}
		if(str[i] == '\n') {
		str[i] = ' ';
		}
	}
	char **arr = mx_strsplit(str, s);
	for(int i = 0; i < mx_count_words(str, ' '); i++) {
		for(int j = 0; j < len; j++) {
			if(mx_strcmp(arr[i], morse[j]) == 0) {
			mx_printstr(alfabet[j]);
		}
		}
	}
	mx_printstr("\n");
    }
    else {
        mx_printerr("usage: ./morse \"str\"\n");
	return 0;
    }
    return 0;
}
