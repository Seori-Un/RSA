#include <iostream>
#include "rsa.h"

int main() {
    RSA rsa(512); // 512비트 키 생성
    mpz_class message("123456789");
    mpz_class encoded = rsa.encode(message);
    mpz_class decoded = rsa.decode(encoded);
    std::cout << "Original: " << message << "\n";
    std::cout << "Encoded: " << encoded << "\n";
    std::cout << "Decoded: " << decoded << "\n";
    return 0;
}
