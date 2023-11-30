//
// Created by danie on 11/23/2023.
//

#ifndef CRYPTOLIB_CAESAR_H
#define CRYPTOLIB_CAESAR_H

#include "string"

using namespace std;

namespace CryptoLib {
    class Caesar {
    private:
        short int shift;
    public:
        Caesar(); // Constructor
        void setShift(short int shiftValue); // Member function to set the shift value with a check
        [[nodiscard]] short int getShift() const;

        [[nodiscard]] string Encrypt(const string &text) const;

        [[nodiscard]] string Decrypt(const string &text) const; // Member function to decrypt the text
    };
}

#endif //CRYPTOLIB_CAESAR_H