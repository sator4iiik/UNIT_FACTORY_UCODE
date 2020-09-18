int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int scmp(const char *s1, const char *s2) {
    if (mx_strlen(s1) < mx_strlen(s2))
        return 1;
    else if (mx_strlen(s1) > mx_strlen(s2))
        return -1;
    else
        return mx_strcmp(s2,s1);
}

int mx_selection_sort(char **arr, int size)
{
    int count = 0;
    for (int i = 0; i < size-1; i++)
    {
        int min = i;
        for (int j = i+1; j < size; j++)
        if (scmp(arr[j], arr[min]) > 0)
            min = j;
        if (min != i){
            char *temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
    return count;
}
