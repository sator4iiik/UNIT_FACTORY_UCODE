void mx_printchar(const char c);
void mx_printint(int n);

void mx_print_arr_int(const int *arr, int size) {
    for (int i = 0; i < size; i++) {
        mx_printint(arr[i]);
        mx_printint('\n');
    }
}

/*int main() {
    const int row[] = {3, 5, 6, 9};
    int len = 6;
    mx_print_arr_int(row, len);
}
*/
