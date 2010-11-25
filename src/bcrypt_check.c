#include <string.h>
#include "bcrypt.h"


int main(int argc, char* argv[]) { 
  char *hash, *hash2, *password;

  if(argc != 3) {
    printf("Usage: %s <hash> <password>\n", argv[0]);
    printf("hash: the hash you want to check.\n");
    printf("password: the password that must match the hash.\n\n");
    printf("print 1 to stdout if hash match password, 0 otherwise.\n");
    return 1;
  }

  hash = argv[1];
  password = argv[2];

  hash2 = bcrypt(password, hash);
  if(strcmp(hash, hash2) != 0) {
    printf("%i\n", 0);
  }
  else {
    printf("%i\n", 1);
  }
  return 0;
}

