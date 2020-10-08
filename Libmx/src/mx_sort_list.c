#include "libmx.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *, void *)) {
    t_list *buff = list;
    void *tmp;

    for (int i = mx_list_size(list) - 1; i > 0; i--) {
        buff = list;
        for (int j = 0; j < i; j++) {
            if (cmp(buff->data, buff->next->data)) {
                tmp = buff->next->data;
                buff->next->data = buff->data;
                buff->data = tmp;
            }
            buff = buff->next;
        }
    }
    return list;
}
