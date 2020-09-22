#include <stdio.h>

void mx_sort_arr_int(int *arr, int size) {
    int count = 0;

    for (int i = 0; i < size - 1; i++) {
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
// int main(void) {
//     int d[] = {3, 55, -11, 1, 0, 4, 22};
//     mx_sort_arr_int(d, 7);
//     for (int i = 0; i < 7; i++)
//         printf("%i", d[i]);
//     printf("\n");
//     printf("Arr = %i %i %i %i %i %i %i \n", d[0], d[1], d[2],
//                                             d[3], d[4], d[5], d[6]);
// }
