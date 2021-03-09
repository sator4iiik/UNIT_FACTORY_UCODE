#include "../inc/atbash.h"

/*                                                 2021
 *                                  w 8
 *      .d8b. 8d8b .d88b 888P 8d8b. w 8.dP .d8b. Yb  dP
 *      8' .8 8P   8.dP'  dP  8P Y8 8 88b  8' .8  YbdP
 *      `Y8P' 8    `Y88P d888 8   8 8 8 Yb `Y8P'   YP
 */


int main (int argc, char **argv) {
    if (argc == 2) {
        int len = mx_strlen(argv[1]);
        char *message = mx_strnew(len);

        for (int i = 0; i < len; i++) {
            if (mx_isalpha(argv[1][i]) && mx_isupper(argv[1][i])) {
                message[i] = 90 - argv[1][i] + 65;
            }
            if (mx_isalpha(argv[1][i]) && mx_islower(argv[1][i])) {
                message[i] = 122 - argv[1][i] + 97;
            }
            if (mx_isspace(argv[1][i])) {
                message[i] = ' ';
            }
            if (!mx_isalpha(argv[1][i])) {
                message[i] = argv[1][i];
            }
        }
        mx_printstr(message);
        mx_printstr("\n");
    }
    else {
        mx_printerr("usage: ./atbash \"str\"\n");
    }
    //system ("leaks -q atbash\n");
    exit(0);
}
