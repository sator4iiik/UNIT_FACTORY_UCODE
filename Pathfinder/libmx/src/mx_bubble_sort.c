#include "libmx.h"

int mx_bubble_sort(char **arr, int size) {
    int i = 0;
    int j = 0;
    char *tmp = NULL;
    int count = 0;
    for(; i < size -1; i++) {
        for(j = 0; j < size - 1; j++) {
            if(mx_strcmp (arr[j], arr[j + 1]) > 0) {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
                count ++;
            }
        }
    }
    return count;
}
