#include "uls.h"

int main(int argc, char ** argv) {
    // parsing
    bool *fl = cf_bool_manip(argc, argv);
    t_path *p = wc_getPaths(argc, argv, fl);
    // fetching
    t_data *d = wc_fetchData(p, fl);
    // kostyl dla L
    if (d)
        wc_cutDeadLinks(d->dirs_path, d->dirs_amt, fl);
    // sort
    cf_flags_check (d, fl);
    // printing
    wc_printResult(d, fl);
    // cleanup
    wc_freePath(p);
    wc_freeData(d);
    free(fl);
    // system("leaks -q uls");
    return fl[err] ? 1 : 0;

}
