#ifndef RSA_H
#define RSA_H

#include <gmpxx.h>

class RSA {
public:
    RSA(int key_size);
    RSA(mpz_class e, mpz_class d, mpz_class K);
    mpz_class sign(mpz_class m), decode(mpz_class m), encode(mpz_class m);

    mpz_class K, e;

protected:
    mpz_class p, q, d, phi;
};

#endif
