#include <stdio.h>

int chars(char c){
    if (c == 'a')
        return 0;
    else if (c == 'b')
        return 1;
    else
        return 3;
}

int main (){
    printf("%d", chars('a'));
    return 0;
}
