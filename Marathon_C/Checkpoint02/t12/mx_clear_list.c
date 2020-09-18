#include "list.h"

void mx_clear_list(t_list **list) {
    t_list *buff = *list;
    t_list *del;

    while(buff->next) {
        del = buff;
        buff = buff->next;
        fre(del);
    }
    free(buff);
    *list = NULL;
}
