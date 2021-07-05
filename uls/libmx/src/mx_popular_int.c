#include "libmx.h"

int mx_popular_int(const int *arr, int size) {
    int fl[size];
    int pop_number, max_c = 0;
    int i = 0;
    while (i < size) {
        while (fl[i] == 1 && i < size)
            i++;
        if (i < size) {
            int count = 1;
            fl[i] = 1;
            for (int j = i + 1; j < size; j++) {
                if (arr[j]==arr[i]) {
                    count++;
                    fl[j]=1;
                }
            }
            if (count > max_c) {
            pop_number = arr[i];
            max_c = count;
            }
        }
    }
    return pop_number;
}
