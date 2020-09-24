#include <stdio.h>
#include <unistd.h>
#include <string.h>

void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[]) {
// в чаре создаем "пустой стакан" с указателем * на первый символ в массиве
// с нуль-терминированными возможностями (безконечно)
    char *pts;

    if(argc < 1)
        return 0;                  // завершаем программу если 1 арг
    for(int i = 1; i < argc - 1; i++) {
        if (mx_strcmp(argv[i], argv[i+1]) <= 0); // сравнение строк i и стр i+1
// <= 0);  если результ сравн меньше или равен 0, то ничего не произойдет.
        else {
            pts = argv[i];
            argv[i] = argv[i+1];
            argv[i+1] = pts;   // переливаем из стакана в стакан
            i = 0;       // сбрасывает счётчик
        }
    }
    for(int i = 1; i < argc; i++) { // фор который печатает строку
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}
