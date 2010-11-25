
all:
	cd openbsd && make
	gcc -c src/*.c
	gcc -lbsd -o bcrypt_example example.o openbsd/*.o
	gcc -lbsd -o bcrypt_hash bcrypt_hash.o openbsd/*.o
	gcc -lbsd -o bcrypt_check bcrypt_check.o openbsd/*.o

clean:
	rm -f *.o openbsd/*.o

mrproper: clean
	rm -f bcrypt_check
	rm -f bcrypt_hash
	rm -f bcrypt_example

