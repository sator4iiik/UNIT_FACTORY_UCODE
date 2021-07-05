#include "libmx.h"

int mx_list_size(t_list *list) {
    t_list *tmp;
    int i = 1;
    if (list == NULL )
        return 0;
    tmp = list;
    while(tmp->next != NULL) {
        tmp = tmp->next;
        i++;
    }
    return i;
}
