#include <unistd.h>


void mx_printchar(char c) {
    write(1, &c, 1); // какой поток, содержимое, количество символов в содерж
}

// int main() {
//     printf("%s\n","H");
//     mx_printchar('p');
//     mx_printchar('\n');

//     return (0);
// }
