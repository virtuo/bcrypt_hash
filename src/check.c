#include "check.h"


int check(char *password, char *hash) {
  /* Returns 1 if password matches hash, 0 otherwise.
   */
  char *hash2;
  hash2 = bcrypt(password, hash);
  if(strcmp(hash, hash2) == 0) return 1;
  else return 0;
}

