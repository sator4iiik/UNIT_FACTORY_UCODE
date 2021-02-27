#include "../inc/caesar.h"

void arr_rotate(char *arr, int len) {
    if (len > 1) {
		int i = 0;
		int j = len - 1;
		while (i < j) {
			char tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
    }
}

char *arr_shift(char *arr, int len, int step) {
    arr_rotate(arr, step);
    arr_rotate(arr + step, len - step);
    arr_rotate(arr, len);
    return arr;
}

int main (int argc, char **argv) {
    if (argc == 3){
	int key = mx_atoi(argv[2]);
	if (key > 25) {
		key = key % 26;
	}
	if (key > 0) {
		char alphabet_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char alphabet_lower[] = "abcdefghijklmnopqrstuvwxyz";
		char tmp_up[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		char tmp_low[] = "abcdefghijklmnopqrstuvwxyz";
	    char *shifted_upper = arr_shift(tmp_up, mx_strlen(alphabet_upper), key);
        char *shifted_lower = arr_shift(tmp_low, mx_strlen(alphabet_lower), key);

		for (int i = 0; i < mx_strlen(argv[1]); i++) {
		if (mx_isupper(argv[1][i]) || mx_islower(argv[1][i])) {
			for (int j = 0; j < mx_strlen(alphabet_upper); j++) {
			if (argv[1][i] == shifted_upper[j]) {
				mx_printchar(alphabet_upper[j]);
			}
			else if (argv[1][i] == shifted_lower[j]) {
				mx_printchar(alphabet_lower[j]);
				}
			}
		}
		else
			mx_printchar(argv[1][i]);
		}
		mx_printchar('\n');
	}
	else {
		mx_printerr("usage: ./caesar \"str\" \"key\"\n");
	}
	// system (leaks -q caesar);
	exit(0);
    }
}
