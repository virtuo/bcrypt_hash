#include "check.h"

int main(int argc, char* argv[]) { 
  char *hash, *password;

  if(argc != 3) {
    printf("Usage: %s <hash> <password>\n", argv[0]);
    printf("hash: the hash you want to check.\n");
    printf("password: the password that must match the hash.\n\n");
    printf("print 1 to stdout if hash match password, 0 otherwise.\n");
    return 1;
  }

  hash = argv[1];
  password = argv[2];

  printf("%i\n", check(password, hash));
  return 0;
}

