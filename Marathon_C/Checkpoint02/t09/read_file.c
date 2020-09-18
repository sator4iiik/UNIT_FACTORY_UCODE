#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    if(argc == 2) {
        int src = open(argv[1], O_RDONLY);
        char buff[64];
        int rd = read (src, buff, 64);

        if (src > 0) {
            while (rd == 64) {
                write(1, buff, rd);
                rd = read(src, buff, 64);
            }
            write(1, buff, rd);
            close(src);
            close(src);
        }
        else
            write(2, "error\n", 6);
    }
    else
    write(2, "usage: ./read_file [file_path]\n", 31);
    return 0;
}
