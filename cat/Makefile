all: clean libhelpers cat

libhelpers:
	cd ../lib && make
cat:
	gcc -I../lib -L../lib -Wl,-rpath=../lib -Wall  -o cat cat.c -lhelpers
clean:
	rm -rf cat.o

	
	
	
	
