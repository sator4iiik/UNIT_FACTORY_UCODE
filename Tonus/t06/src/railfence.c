#include "../inc/railfence.h"

int main (int argc, char **argv) {
    if (argc == 3) {
        char *enMsg = argv[1];
        int key = mx_atoi(argv[2]);

        if (key > 1) {
            int msgLen = mx_strlen(enMsg), i, j, k = -1, row = 0, col = 0, m = 0;
            char railMatrix[key][msgLen];

            for(i = 0; i < key; ++i) {
                for(j = 0; j < msgLen; ++j) {
                    railMatrix[i][j] = '\n';

                }
            }

            for(i = 0; i < msgLen; ++i) {
                railMatrix[row][col++] = '*';

                if(row == 0 || row == key -1) {
                    k = k * (-1);
                }
                row = row + k;
            }
            for(i = 0; i < key; ++i) {
                for(j = 0; j < msgLen; ++j) {
                    if(railMatrix[i][j] == '*') {
                        railMatrix[i][j] = enMsg[m++];
                    }
                }
            row = col = 0;
            k = -1;
            }
            for(i = 0; i < msgLen; ++i) {
                mx_printchar(railMatrix[row][col++]);

                if(row == 0 || row == key-1) {
                    k = k * (-1);
                }
                row = row + k;
            }
            mx_printchar('\n');
        }
        if (key == 1) {
            return *enMsg;
        }
        if (key < 1) {
            mx_printerr("usage: ./railfence \"str\" \"key\"\n");
        }
        else {
            mx_printerr("usage: ./railfence \"str\" \"key\"\n");
        }
        // system ("leaks -q railfence\n");
        exit(0);
    }
}
