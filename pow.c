
#include <stdio.h>
#include "poison.h"


int modular_pow(int base, int exponent, int modulus) {
  if(modulus == 1) {
    return 0;
  }

  int result = 1;
  base = base % modulus;
  while(exponent > 0) {
    if (exponent % 2 == 1) {
      result = (result * base) % modulus;
    }
    exponent = exponent >> 1;
    base = (base * base) % modulus;
  }
  return result;
}


int main(){
  int modulus = 65535;
  int base = 123;
  int exponent = 981357566;
  // mark the exponent as secret
  poison(&exponent, sizeof(int));
  int res = modular_pow(base, exponent, modulus);

  printf("res: %d\n", res);  
  return 0;
}
