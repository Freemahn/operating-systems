#include <unistd.h>
ssize_t read_(int fd, void *buf, size_t count){
	int read_cur = 0;
    int read_all = 0;
    
    while(1) {
        read_cur = read(fd, buf, count);
        read_all += read_cur;
        buf += read_cur;
        count -= read_cur;
        if(read_cur == count ||read_cur == 0) {
            return read_all;
        }

        if(read_cur == -1) {
            return -1;
        }
        
        
    }
}
ssize_t write_(int fd, const void *buf, size_t count){

	int write_cur = 0;
    int write_all = 0;

    while(1) {
        write_cur = write(fd, buf, count);
		write_all += write_cur;
        buf += write_cur;
        count -= write_cur;
        if(write_cur == count) {
            return write_all;
        }

        if(write_cur == -1) {
            return -1;
        }

        
    }
	
}
size_t read_until(int fd, void * buf, size_t count, char delimiter){
	int read_cur = 0;
    int read_all = 0;
    while(1) {
        read_cur = read(fd, buf, 1);
        if(read_cur == -1) {
            return -1;
        }
        if((read_cur == 0)||(read_all==count))
        	return read_all;

              
        if((((char*)buf)[0] == delimiter )){
        	return read_all+1;
        }
        read_all++;
        buf++;
    }
	return 0;
}