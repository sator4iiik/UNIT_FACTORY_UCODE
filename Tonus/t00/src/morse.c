#include "../inc/morse.h"

/*                                                 2020
 *                                  w 8
 *      .d8b. 8d8b .d88b 888P 8d8b. w 8.dP .d8b. Yb  dP
 *      8' .8 8P   8.dP'  dP  8P Y8 8 88b  8' .8  YbdP
 *      `Y8P' 8    `Y88P d888 8   8 8 8 Yb `Y8P'   YP
 */

int main(int argc, char *argv[]) {
    if(argc == 2) {

		char *alphabet[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i",
		"j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v",
		"w", "x", "y", "z", ".", " ", NULL};

		char *morse[] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
		"....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.",
		"--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--",
		"--..", ".....", "55555", NULL};

		char *message = argv[1];
		char separ = ' ';

		for (int i = 0; i < mx_strlen(message); i++) {
			if (message[i] == separ && message[i + 1] == separ) {
				message[i + 1] = '5';
			}
			if(message[i] == '5' && message[i + 1] == separ && message[i + 2] == separ) {
				message[i + 1] = '5';
			}
			if(message[i] == '\n') {
				message[i] = ' ';
			}
		}

		char **output = mx_strsplit(message, separ);
		int len = 0;
		while (morse[len] != NULL) {
			len++;
		}
		for (int i = 0; i < mx_count_words(message, separ); i++) {
			for (int j = 0; j < len; j++) {
				if (mx_strcmp(morse[j], output[i]) == 0) {
					mx_printchar(alphabet[j][0]);
				}
			}
		}
		mx_printchar('\n');
	}
	else {
		mx_printerr("usage: ./morse \"str\"\n");
	}
	//system ("leaks -q morse");
	exit(0);
}
