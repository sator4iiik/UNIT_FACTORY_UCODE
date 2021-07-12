#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *multi_table(int num) {
    int i = 0;
    char *tab = malloc(128 * sizeof(char));

        for(i = 1; i <= 10; i++) {
            sprintf(tab, (i < 10) ? "%s%d * %d = %d\n" : "%s%d * %d = %d", tab, i, num, (i * num));
        }
    return tab;
}
