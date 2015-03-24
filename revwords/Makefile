all:clean revwords
revwords:
	gcc -std=c99 -I../lib -L../lib -Wl,-rpath=../lib -Wall  -o revwords revwords.c -lhelpers
clean:
	rm -f revwords.o
	rm -f revwords

	
	