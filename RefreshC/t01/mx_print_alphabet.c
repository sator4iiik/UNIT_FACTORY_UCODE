#include <stdio.h>

void mx_printchar(char c);           // декларируем функцию врайт

void mx_print_alphabet(void) {       //
    for (int a=0; a<=24; a+=2) {     // пересчёт итераций
        mx_printchar(a+'A');         // вызываю функцию
        mx_printchar(a+'b');
    }
    mx_printchar('\n');
}

// int main(void) {
//     mx_print_alphabet();
// }


// декларирую - заявляю что эта функция будет использована в моей прогр ил функ
// вызываю - говорю о том что эта функция будет использ d
