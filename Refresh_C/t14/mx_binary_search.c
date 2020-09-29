#include <stdio.h>
#include <string.h>
#include <unistd.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int first = 0, last = size -1;
    int i = (first+last) / 2;
    while (first <= last) {
        *count += 1;
        if (!mx_strcmp(arr[i], s))
            return i;
        if (mx_strcmp(arr[i], s) < 0) {
            first = i + 1;
        }
        else {
            last = i - 1;
        }
        i = (first+last) / 2;
    }
    *count = 0;
    return -1;
}
// int main() {
//     char *arr[6] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count = 0;

//     printf("index = %d\n", mx_binary_search(arr, 6, "ab", &count));
//     printf("count = %d\n", count);
//     count = 0;
//     printf("index = %d\n", mx_binary_search(arr, 6, "aBc", &count));
//     printf("count = %d\n", count);
//     count = 0;
//     printf("index = %d\n", mx_binary_search(arr, 6, "aBz", &count));
//     printf("count = %d\n", count);

// }
