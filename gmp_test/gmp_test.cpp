#include <iostream>
#include <random>
#include <gmpxx.h>

#define SIZE 2048

using namespace std;

mpz_class gen_rand(void);

int main() {
  mpz_class c = gen_rand();
  mpz_class d = gen_rand();
  mpz_class n = gen_rand();
 
  cout << "c=" << c << endl;
  cout << "d=" << d << endl;
  cout << "n=" << n << endl;
  
  return 0;
}

mpz_class gen_rand(void) {
  mpz_class x;
  random_device rnd;
  gmp_randclass rand(gmp_randinit_default);

  rand.seed(rnd());
  x = rand.get_z_bits(SIZE);

  return x;
}
