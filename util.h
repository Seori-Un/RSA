#ifndef UTIL_H
#define UTIL_H

#include <gmpxx.h>

mpz_class nextprime(mpz_class n);
mpz_class powm(mpz_class base, mpz_class exp, mpz_class mod);
mpz_class random_prime(unsigned byte_len);

#endif
