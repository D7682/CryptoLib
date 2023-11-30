//
// Created by danie on 11/30/2023.
//

#ifndef CRYPTOLIB_SUBSTITUTION_H
#define CRYPTOLIB_SUBSTITUTION_H

#include <string>

using namespace std;

namespace CryptoLib {
    class Substitution {
    private:
        string key;
    public:
        explicit Substitution(string  substitutionKey);
        [[nodiscard]] static string Encrypt(const string& text) ;
        [[nodiscard]] static string Decrypt(const string& text) ;
    };
}
#endif //CRYPTOLIB_SUBSTITUTION_H
