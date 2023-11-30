//
// Created by danie on 11/30/2023.
//

#include "Substitution.h"
#include <string>
#include <utility>

using namespace std;
using namespace CryptoLib;

Substitution::Substitution(string  substitutionKey) : key(std::move(substitutionKey)) {
    // Initialize the substitution key
}

[[nodiscard]] string Substitution::Encrypt(const string& text) {
    // Implement the substitution encryption logic
    // Use the 'key' to substitute each letter in 'text'
    return text;
}

[[nodiscard]] string Substitution::Decrypt(const string& text) {
    // Implement the substitution decryption logic
    // Use the 'key' to reverse the substitution for each letter in 'text'
    return text;
}