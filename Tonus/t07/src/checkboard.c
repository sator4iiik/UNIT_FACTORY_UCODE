#include "../inc/checkboard.h"

int main (int argc, char **argv) {
    if (argc == 5) {
        char *text = argv[1];
        char *alphabet = argv[2];
        int num1 = mx_atoi(argv[3]);
        int num2 = mx_atoi(argv[4]);

        if (num1 > 0 && num2 > 0 && num1 != num2) {
            // (void) *text;
            char spaces[] ="**";
            char *arr_alpha = mx_strcat(alphabet, spaces);

            for (int i = mx_strlen(arr_alpha) - 1; i >= 0; i--) {
                if (i != num1) {
                    arr_alpha[i] = arr_alpha[i - 1];
                }
                if (i == num1) {
                    arr_alpha[i] = '*';
                    break;
                }
            }
            for (int i = mx_strlen(arr_alpha) - 1; i >= 0; i--) {
                if (i != num2) {
                    arr_alpha[i] =arr_alpha[i - 1];
                }
                if (i == num2) {
                    arr_alpha[i] = '*';
                    break;
                }
            }
            char **checkboard = (char **)malloc(sizeof(char *) * 3);
            int k = 0;

            while ((*arr_alpha) && (*arr_alpha != '\0')) {
                checkboard[k] = mx_strndup(arr_alpha, 10);
                arr_alpha += 10;
                k++;
            }
            for (int i = 0; i < mx_strlen(text); i++) {
                if (mx_isdigit(text[i])) {
                    if ((text[i] != ((char)num1 + 48)) && (text[i] != ((char)num2 + 48))) {
                        mx_printchar(checkboard[0][(int)text[i]-48]);
                    }
                    else if (text[i] == ((char)num2 + 48)) {
                        mx_printchar(checkboard[2][(int)text[i + 1]-48]);
                        i++;
                    }
                    else if (text[i] == ((char)num1 + 48)) {
                        mx_printchar(checkboard[1][(int)text[i + 1]-48]);
                        i++;
                    }
                }
                else {
                    mx_printchar(text[i]);
                }
            }
            mx_printchar('\n');
        }
    }
    else {
        mx_printerr("usage: ./checkboard \"text\" \"alphabet\" \"num1\" \"num2\"\n");
    }
}
