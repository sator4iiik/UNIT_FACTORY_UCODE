// #include <stdio.h>

// void fortune_cookie(char msg[]) {
//     // msg = (long)msg; переобразование указателя в обычное число
//     printf("сообщение гласит: %s\n", msg);
//     printf("msg занимает %lu байтов\n", sizeof(msg));
//     // printf("Строка qute хранится по адресу: %p\n", (void *)&quote);
// }

// int main() {
//     char quote[] = "Печенье вас полнит";
//     fortune_cookie(quote);
// // переменную масива можно использовать как указатель
// // переменная массива указывает на первый
// }

#include <stdio.h>

// * мы создали поинтер потому что засылаем в параметр не один символ (char msg)
// а целый массив n размера
void test_1 (char *msg) {
    printf("print text %i \n", (int)sizeof(msg));
    // выше мы перекастовали sizeof c char в int
    // msg = (long)msg;
    // sizeof читает размер ссылочной переменной а
    // не то что находится в переменной по адрессу
}

int main(void) {
    char Z[] = "jopa";
    test_1(Z);
    return 0;
}

// sizeof возвращает разные значения для указателей и переменных массивов

// если присвоить указателю переменную массива она теряет
// информацию о количестве элементов

// переменные масивов не могут указывать на что либо другое

// можно проводить + - над указателями но умножать или делить нельзя
