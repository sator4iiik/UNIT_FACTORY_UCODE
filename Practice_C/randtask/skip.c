#include <stdio.h>

void skip(char *msg) {
    puts(msg+3);
}

int main() {
    char *msg_from_amy = "Ne zvoni mne";
    skip(msg_from_amy);

    return 0;
}

// если будешь пользоваться кириллической раскладкой в массиве
// данные будут другие ()
