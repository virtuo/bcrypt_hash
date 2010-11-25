#include "bcrypt.h"
#include "check.h"
#include "tests_data.h"


int main() {
  int i;
  char *salt, *hash, *password, *expected;

  for(i=0; i<NB_TESTS; i++) {
    password = tests[i][0]; salt = tests[i][1]; expected = tests[i][2];
    hash = bcrypt(password, salt);
    if(strcmp(hash, expected) == 0 && check(password, hash) == 1) {
      printf(".");
    }
    else {
      printf("%s != %s (test %i)\n", hash, expected, i);
      return 1;
    }
  }
  printf("\n%i tests Ran successfully\n", NB_TESTS);
  return 0;
}

