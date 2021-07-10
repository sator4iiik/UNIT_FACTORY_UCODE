#include <stdio.h>

void letDoses (int doses[]) {
    printf("Отпущенная доза %i\n", doses[3]);
}

int main(void) {
    int doses[] = {1, 3, 2, 1000};
    letDoses(doses);
    return 0;
}
