#include <errno.h>
#include <unistd.h>
#include <string.h>
#include "helpers.h"

void reverse(char* buf, size_t length) {
	char tmp;
	for (int i = 0; i < length/2; i++) {
		tmp = buf[i];
		buf[i] = buf[length-1-i];
		buf[length-1-i] = tmp;
	}
}


int main(int argc, char* argv[]) {
	char buf[4096];
    char* error = strerror(errno);
    ssize_t read_cur = 0;
    ssize_t write_cur = 0;

	while(1) {
	        read_cur = read_until(STDIN_FILENO, buf, sizeof(buf), ' ');
	        if(read_cur == -1) {
	            write_(STDERR_FILENO, error, strlen(error) * sizeof(char));
	            return 1;
	        }
	        reverse(buf,read_cur);
	        write_cur = write_(STDOUT_FILENO, buf, read_cur);
	        if(write_cur == -1) {
	            write_(STDERR_FILENO, error, strlen(error) * sizeof(char));
	            return 2;
	        }
	        
	        
	    }

	return 0;
}