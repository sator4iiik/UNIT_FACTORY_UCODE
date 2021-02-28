#include "../inc/vigenere.h"

int main(int argc, char **argv) {
    if (argc == 3) {
    char *message = argv[1];
	char *key = argv[2];

	if (mx_isalpha(*key)) {
		for (int i = 0, j = 0; i < mx_strlen(message); i++, j++) {
			if (j == mx_strlen(key)) {
				j = 0;
			}
			if (mx_isalpha(message[i]) == 0) {
				if (mx_isspace(message[i])) {
					mx_printchar(' ');
				}
				else {
					mx_printchar(message[i]);
				}
				j--;
			}
			if (mx_isalpha(message[i])) {
				if (mx_isupper(message[i]) && mx_isupper(key[j])) {
				mx_printchar((message[i] - key[j] + 26) % 26 + 65);
				}
				if (mx_isupper(message[i]) && mx_islower(key[j])) {
					if ((key[j] - message[i]) > 32) {
					mx_printchar((message[i] - key[j] + 26) + 97);
				}
				else {
					mx_printchar((message[i] - key[j]) + 97);
				}
				}
				if (mx_islower(message[i]) && mx_isupper(key[j])) {
					if (message[i] - key[j] > 32) {
					mx_printchar((message[i] - key[j] + 26) + 65);
				}
				else {
					mx_printchar((message[i] - key[j]) + 65);
				}
				}
				if (mx_islower(message[i]) && mx_islower(key[j])) {
					mx_printchar((message[i] - key[j] + 26) % 26 + 97);
				}
			}
		}
		mx_printchar('\n');
	}
	else {
		mx_printerr("usage: ./vigenere \"str\" \"key\" - key is not valid\n");
		}
    }
    else {
        mx_printerr("usage: ./vigenere \"str\" \"key\"\n");
    }
    //system ("leaks -q vigenere");
    exit(0);
}
