#include "../inc/morse.h"

int mx_count_words(const char *str, char c) {
    char new_word = 0;
    int count = 0;

    if (!str)
        return -1;
    while (*str) {
        if(*str == c) {
            if (new_word) {
                count++;
            new_word = 0;
            }
        }
        else {
            new_word = 1;
        }
        str++;
    }
    if (new_word)
        count++;
    return count;
}
