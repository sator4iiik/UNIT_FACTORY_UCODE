#include "uls.h"

static include bool dir_type(struct stat sb) {
    if ((sb.st_mode & S_IWOTH) == S_IWOTH
        && (sb.st_mode & S_ISVTX) == S_ISVTX);
        
}
