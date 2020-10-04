#include "libmx.h"

void leftRotateby0ne(int arr[], int n);
void rightRotateby0ne(int arr[], int n);

void mx_arr_roate(int *arr, int size, int shift) {
    if (shift > 0) {
        for (int i = 0; i < shift; i++)
        rightRotateby0ne(arr, size);
    }
    else if(shift<0) {
        for (int i = 0; i > shift; i--)
        leftRotateby0ne(arr,size);
    }
}

void leftRotateby0ne(int arr[], int n) {
    int temp = arr[0], j;
    for (j = 0; j<n-1; j++)
        arr[j] = arr[j+1];
        arr[j] = temp;
}

void rightRotateby0ne(int arr[], int n) {
    int temp = arr[n-1], j;
    for (j = n-1; j>0; j--) {
        arr[j] = arr[j-1];
    }
    arr[j] = temp;
}
