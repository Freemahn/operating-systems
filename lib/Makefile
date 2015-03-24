all: clean helpers.o libhelpers
libhelpers: 
	cc -shared -o libhelpers.so helpers.o
helpers.o: 
	cc -c -fPIC helpers.c -o helpers.o
clean:
	rm -f helpers.o
	rm -f libhelpers.so