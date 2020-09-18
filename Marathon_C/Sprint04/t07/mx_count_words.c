//#include <stdio.h>

int mx_count_words(const char *str, char delimiter) {
        char new_word = 0;
            int count = 0;
            while (*str) {
                if(*str == delimiter) {
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

/*int main() {
    char str[] = "follow   * the white rabbit";
    char separ = ' ';
    printf("%d", mx_count_words(str, separ));
}
*/
