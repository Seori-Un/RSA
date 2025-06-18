#include "util.h"
#include <random>

mpz_class nextprime(mpz_class n) {
    mpz_class r;
    mpz_nextprime(r.get_mpz_t(), n.get_mpz_t());
    return r;
}

mpz_class powm(mpz_class base, mpz_class exp, mpz_class mod) {
    mpz_class r;
    mpz_powm(r.get_mpz_t(), base.get_mpz_t(), exp.get_mpz_t(), mod.get_mpz_t());
    return r;
}

mpz_class random_prime(unsigned byte_len) {
    std::random_device rd;
    std::uniform_int_distribution<int> dist(0, 255);
    mpz_class z;
    while (true) {
        std::string hex = "0x";
        for (unsigned i = 0; i < byte_len; ++i) {
            char buf[3];
            sprintf(buf, "%02x", dist(rd));
            hex += buf;
        }
        z.set_str(hex, 0);
        z = nextprime(z);
        if (z % 2 != 0) return z;
    }
}
