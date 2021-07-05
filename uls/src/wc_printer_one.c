#include "uls.h"

void wc_printWithOne(t_obj **fp, int fp_amp, bool *fl) {
    for(int i = 0; i < fp_amp; i++) {
        wc_printName(fp[i], fl);
        mx_printstr("\n");
    }
}
