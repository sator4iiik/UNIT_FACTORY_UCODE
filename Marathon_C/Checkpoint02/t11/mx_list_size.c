#include "list.h"

int mx_list_size(t_list *list) {
    int count = -1;

    if (list) {
        count = 1;
        while ((list = list->next))
            count++;
    }
    return count;
}
