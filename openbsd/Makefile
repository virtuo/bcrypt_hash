
all:
	gcc -c -D _PASSWORD_LEN=128 src/lib/libc/crypt/*.c -I src/include/

update_files:
	cvs -d anoncvs@anoncvs.ca.openbsd.org:/cvs get src/lib/libc/crypt/bcrypt.c
	cvs -d anoncvs@anoncvs.ca.openbsd.org:/cvs get src/lib/libc/crypt/blowfish.c
	cvs -d anoncvs@anoncvs.ca.openbsd.org:/cvs get src/include/blf.h

