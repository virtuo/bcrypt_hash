#include "bcrypt.h"

int main(int argc, char* argv[]) { 
  char *salt, *hash, *password;
  int nb_rounds;

  if(argc != 3) {
    printf("Usage: %s <nb_rounds> <password>\n", argv[0]);
    printf("nb_rounds (int, between 4 and 31): the number of rounds used for blowfish hash algorithm.\n");
    printf("password: the string to hash.\n\n");
    printf("Print on stdout the resulting hash.\n");
    return 1;
  }

  nb_rounds = atoi(argv[1]);
  password = argv[2];

  if(nb_rounds < 4 || nb_rounds > 31) {
    printf("nb_rounds must be greater than 3 and smaller than 32\n");
    return 1;
  }

  salt = bcrypt_gensalt(nb_rounds);
  hash = bcrypt(password, salt);
  printf("%s\n", hash);
  return 0;
}

