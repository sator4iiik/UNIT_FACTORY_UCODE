// #include <stdio.h>     // для printf
#include <string.h>       // для strlen

int mx_strlen(const char *s) {
	int res = 0;                // количество итераций
	while (s[res] != '\0') {    // начало массива
		res++;
	}
	return res;                 // возвращаем результат
}

// мы перебираем массив до тех пор пока он не дойдёт до '\0'

// int main(void) {
// 	printf("%d\n", mx_strlen("efiuwgrfpiuJHlihnqltyfuokp"));

// 	int H = mx_strlen("ta ti vzhe zaebav");
// 	return (H);
// }

// echo $?
