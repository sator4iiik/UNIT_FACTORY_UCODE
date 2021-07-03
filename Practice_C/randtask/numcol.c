#include <stdio.h>
// #include <string.h>
// #include <unistd.h>

#define MAX_COLOR 6
#define RESET_COLOR 7

int main() {
    char buffer[64];
    int color = 0;

    printf("print some:\n");

    while(scanf("%s", buffer) == 1) {
        printf("\033[3%dm%s \033[3%dm", color, buffer, RESET_COLOR);
        color = (color == MAX_COLOR ? 0 : color + 1);
    }
    printf("\033[3%dm", RESET_COLOR);
    return 0;
}
