all: libhelpers cat/cat

libhelpers:
	cd lib && make
cat/cat: 
	cd cat && make
	

