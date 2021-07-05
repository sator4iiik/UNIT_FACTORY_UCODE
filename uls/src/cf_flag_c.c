#include "uls.h"

static bool cmpLexographical(t_obj *obj1, t_obj *obj2) {
    char *s1 = obj1->s_name;
    char *s2 = obj2->s_name;

    if (obj1->st.st_ctime == obj2->st.st_ctime) {
        for (; *s1 == *s2; s1++, s2++)
            if (*s1 == '\0')
                return 0;
        return (*s1 - *s2) > 0 ? true : false;
    }
    return obj1->st.st_ctime < obj2->st.st_ctime ? true : false;
}

void cf_flag_c(t_obj **d, int d_amt, const bool *fl) {
    if (fl[c] && fl[t]) {
        wc_quicksortObj(d, 0, d_amt - 1, cmpLexographical);
        for (int i = 0; i < d_amt; i++)
            if (d[i]->kids_amt)
                cf_flag_c(d[i]->kids, d[i]->kids_amt, fl);
    }
}
