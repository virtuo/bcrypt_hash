#include "bcrypt.h"

void main() {
  char* salt;
  char *hash;
  char* password = "A wonderfull password";

  printf("Password: '%s'\n", password);
  salt = bcrypt_gensalt(5);
  printf("Generated salt: %s\n", salt);  
  hash = bcrypt(password, salt);
  printf("Hash : %s\n", hash);
  hash = bcrypt(password, hash);
  printf("Hash2: %s\n", hash);

}

