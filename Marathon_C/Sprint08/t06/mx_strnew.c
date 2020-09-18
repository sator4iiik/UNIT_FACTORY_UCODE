#include "create_agent.h"

char *mx_strnew(const int size){
    char *buff = NULL;

    if (size > 0){
        buff = malloc(size + 1);
        buff[size] = '\0';
    }
    return buff;
}




// int main(){
//     // printf("%s",mx_strnew(10)); //returns string with size 10 and terminated by'\0'
//     // printf("%s",mx_strnew(-1)); //returns NULL

// }
