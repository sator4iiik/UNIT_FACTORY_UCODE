#include "create_agent.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    char *ptr = dst;
    for (int i = 0; i < len; i++) {
        *dst++ = *src;
        if (*src)
            src++;
    }
    return ptr;
}
/* int main() {
    const char test[] = "im bored, so wtf?";
    char real[] = "Money";
    int len = 8;
    printf("%s", mx_strncpy(real. test, len));
    
}
*/
