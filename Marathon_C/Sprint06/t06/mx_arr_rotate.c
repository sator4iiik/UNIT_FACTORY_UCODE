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
/* What things have you learned during this sprint?

What ways of sorting data do you know?

What is a library (in programming)?

How to create your own library?

How to use it?

What is sorting?

What is linear search?

What is binary search?

How did you understand insertion sort?

In what cases is selection sort the best practice?

What are the main purposes of various sorting algorithms?

Why not just use bubble sort?

Why is the knowledge you have acquired important?
*/

