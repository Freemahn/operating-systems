all:
	cd lib && make
	cd cat && make
	cd revwords && make

clean:
	cd lib && make clean
	cd cat && make clean
	cd revwords && make clean