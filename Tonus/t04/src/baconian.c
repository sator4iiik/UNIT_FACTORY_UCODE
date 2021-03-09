#include "../inc/baconian.h"

int arr_len(char **arr) {
    int len = 0;

    while (arr[len] != NULL) {
        len++;
    }
    return len;
}

int main (int argc, char **argv) {
    if (argc == 2) {
        char *message = argv[1];
        char *tmp = (char *)malloc(sizeof(char) * mx_strlen(message));
        char *cipher = (char *)malloc(sizeof(char) * mx_strlen(message));
        char *alphabet[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i"
        "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v"
        "w", "x", "y", "z", ",", ".", " ", NULL};
        char *bacon_alphabet[] = {"AAAAA", "AAAAB", "AAABA", "AAABB",
        "AABAA", "AABAB", "AABBA", "AABBB", "ABAAA", "ABAAB", "ABABA",
        "ABABB", "ABBAA", "ABBAB", "ABBBA", "ABBBB", "BAAAA", "BAAAB",
        "BAABA", "BAABB", "BABAA", "BABAB", "BABBA", "BABBB", "BBAAA",
        "BBAAB", "BBABA", "BBABB", "BBBAA", NULL};

        for (int i = 0, j = 0; i < mx_strlen(message); i++, j++) {
            if (mx_isalpha(message[i])) {
                tmp[j] = message[i];
            }
            if (mx_isspace(message[i]) || !mx_isalpha(message[i])) {
                j--;
            }
        }
        for (int i = 0; i < mx_strlen(tmp); i++) {
            if (mx_isalpha(tmp[i])) {
                if (mx_isupper(tmp[i])) {
                    cipher[i] = 'B';
                }
                if (mx_islower(tmp[i])) {
                    cipher[i] = 'A';
                }
            }
        }

        char **bacon = (char **)malloc(sizeof(char *) * (mx_strlen(cipher)/5 + 1));
        int k = 0;

        while ((*cipher) && (*cipher != '\0')) {
            bacon[k] = mx_strndup(cipher, 5);
            cipher += 5;
            k++;
        }
        bacon[k] = NULL;

        for (int i = 0; i < arr_len(bacon); i++) {
            for (int j = 0; j < arr_len(bacon_alphabet); j++) {
                if (mx_strcmp(bacon[i], bacon_alphabet[j]) == 0) {
                    mx_printchar(alphabet[j][0]);
                }
            }
        }
        mx_printchar('\n');
    }
    else {
        mx_printerr("usage: ./baconian \"str\"\n");
    }
    // system ("leaks -q baconian\n")
    exit(0);
}
