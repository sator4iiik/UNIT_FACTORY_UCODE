#include "libmx.h"

void *mem_memmem(const void *big, size_t big_len, const void *little,
                size_t little_len) {
    unsigned char *tmp_big = NULL;
    unsigned char *tmp_little = NULL;

    if (big_len >= little_len && big_len > 0 && little_len > 0) {
        tmp_big = (unsigned char *)big;
        tmp_little = (unsigned char *)little;
        while (*tmp_big) {
            if (mx_memcmp(tmp_big, tmp_little, little_len - 1) == 0)
                return tmp_big;
            tmp_big++;
        }
    }
    return NULL;
}
