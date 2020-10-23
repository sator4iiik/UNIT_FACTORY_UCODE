#include "libmx.h"

static void swap(char **el1, char** el2) {
    char* tmp = *el1;
    *el1 = *el2;
    *el2 = tmp;
}

int mx_quicksort(char **arr, int left, int right) {
    int count = 0;
    int l = left;
    int r = right;
    int p = mx_strlen(arr[(l + r) / 2]);

    while (l < r) {
        while (mx_strlen(arr[l]) < p) l++;
        while (mx_strlen(arr[r]) > p) r--;
        if (l <= r){
            if (mx_strlen(arr[l]) != mx_strlen(arr[r])) {
                swap(&arr[l], &arr[r]);
                count++;
            }
            l++;
            r--;
        }
    }
    if (left < r) count += mx_quicksort(arr, left, r);
    if (l < right) count += mx_quicksort(arr, l, right);
    return count;
}

// static void sort(char **arr, int i, int j, int *count) {
//     char *tmp = 0;
//     tmp = arr[j];
//     arr[j] = arr[i];
//     arr[i] = tmp;
//     (*count)++;
// }

// int mx_quicksort(char **arr, int left, int right) {
//     int middle = (left + right) / 2;
//     int i = left;
//     int j = right;
//     int count = 0;

//     if (!arr)
//         return -1;
//     if (i < j) {
//         while (mx_strlen(arr[i]) < mx_strlen(arr[middle]))
//             i++;
//         while (mx_strlen(arr[j]) > mx_strlen(arr[middle]))
//             j--;
//         if (mx_strlen(arr[i]) != mx_strlen(arr[j]))
//             sort(arr, i, j, &count);
//         if (++i < right)
//             count += mx_quicksort(arr, i, right);
//         if (--j > left)
//             count += mx_quicksort(arr, left, j);
//     }
//     return count;
// }
