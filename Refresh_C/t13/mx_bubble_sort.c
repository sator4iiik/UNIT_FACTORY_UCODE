// #include <stdio.h>
#include <string.h>
#include <unistd.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i -1; j++) {
            if (mx_strcmp(arr[j],arr[j+1]) > 0) {
                char *temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
        }
    }
    return count;
}

// int main() {
//     // int size = 4;
//     char *arr[4] = {"abc", "xyz", "ghi", "def"};
//     char *arr2[3] = {"abc", "acb", "a"};;

//     printf("count = %d\n", mx_bubble_sort(arr, 4));
//     printf("count = %d\n", mx_bubble_sort(arr2, 3));
// }
