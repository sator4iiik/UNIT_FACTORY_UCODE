#include "libmx.h"

void mx_sort_arr_int(int *arr, int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            count += 1;
        }
    }
    // printf("COUNT = %i\n", count);
}
