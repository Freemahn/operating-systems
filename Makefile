all: libhelpers cat revwords

libhelpers:
	cd lib && make
cat: 
	cd cat && make
revwords: 
	cd revwords && make
