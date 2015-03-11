all: libhelpers cat

libhelpers:
	cd lib && make
cat: 
	cd cat && make
	

