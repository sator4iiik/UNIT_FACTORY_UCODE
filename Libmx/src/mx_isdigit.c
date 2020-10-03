#include <stdbool.h>
#include <stdio.h>

bool m_isdigit(int c) {
    if(c >= 48 && c<= 57) {
        return true;
    }
    else {
        return false;
    }
