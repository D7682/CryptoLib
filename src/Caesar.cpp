//
// Created by danie on 11/30/2023.
//
#include "Caesar.h"
#include <iostream>

using namespace CryptoLib;

// Constructor with a default shift value of 3
Caesar::Caesar() : shift(3) {};

void Caesar::setShift(short int shiftValue) {
    if (shiftValue >= 0 && shiftValue <= 10) {
        shift = shiftValue;
    } else {
        cerr << "Error: Shift value must be between 0 and 10." << endl;
        exit(EXIT_FAILURE);
    }
};

[[nodiscard]] short int Caesar::getShift() const {
    return shift;
};

[[nodiscard]] string Caesar::Encrypt(const string &text) const {
    string encryptedText = text;

    for (char &ch: encryptedText) {
        // Check if the character is a letter
        if (isalpha(ch)) {
            // Determine whether it is uppercase or lowercase
            char base = isupper(ch) ? 'A' : 'a';
            // Apply the Caesar cipher shift
            ch = static_cast<char>((ch - base + shift) % 26 + base);
        }
    }
    return encryptedText;
};

[[nodiscard]] string Caesar::Decrypt(const string &text) const {
    // The decryption process is the same as encryption with a reversed shift
    string decryptedText = text;

    for (char &ch: decryptedText) {
        // Check if the character is a letter
        if (isalpha(ch)) {
            // Determine whether it is uppercase or lowercase
            char base = isupper(ch) ? 'A' : 'a';
            // Apply the reversed Caesar cipher shift
            ch = static_cast<char>((ch - base - shift + 26) % 26 + base);
        }
    }

    return decryptedText;
}
