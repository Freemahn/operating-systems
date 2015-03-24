#include <errno.h>
#include <unistd.h>
#include "helpers.h"

int main(int argc, char* argv[]) {
    char buf[4096];
    ssize_t read_cur = 0;
    ssize_t write_cur = 0;

    while(1) {
        read_cur = read_(STDIN_FILENO, buf, sizeof(buf));
        if(read_cur == -1) {
            return errno;
        }

        write_cur = write_(STDOUT_FILENO, buf, read_cur);
        if(write_cur == -1) {
            return errno;
        }
        
        if(read_cur < sizeof(buf)) {
            return 0;
        }
    }
    return 0;
}