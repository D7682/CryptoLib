#include <gtest/gtest.h>
#include "Caesar.h"

// ANSI escape codes for text color
#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"

using namespace CryptoLib;

// Constant Vector which we can use in tests that require specific values
const vector<string> names = vector<string> {
    "Erika", "Daniel", "Chris", "Adrian", "Andres", "Maria", "Bunny", "Binx", "Max", "Snowball", "Prince Phillip"
};

// Tests the DefaultConstructor
TEST(Caesar, DefaultConstructor) {
    const Caesar caesarInstance;
    EXPECT_EQ(3, caesarInstance.getShift());
};

// Tests the getShift method
TEST(Caesar, getShift) {
    Caesar caesarInstance;
    for (short int i = 1; i <= 10; i++) {
        caesarInstance.setShift(i);
        EXPECT_EQ(caesarInstance.getShift(), i);
    }
};

// Tests the Encrypt method
TEST(Caesar, Encrypt) {
    Caesar caesarInstance;
    cout << "\n\n";
    for (const auto &name: names) {
        string message = "Hello, " + name + "!";
        string encryptedText = caesarInstance.Encrypt(message);
        string decryptedText = caesarInstance.Decrypt(encryptedText);
        EXPECT_FALSE(encryptedText.empty());
        EXPECT_EQ(encryptedText.length(), message.length());
        EXPECT_EQ(message, decryptedText);
    }

};

// Tests the Decrypt Method
TEST(Caesar, Decrypt) {
    Caesar caesarInstance;

    for (const auto &name: names) {
        std::string message = "Hello, " + name + "!";
        std::string encryptedText = caesarInstance.Encrypt(message);
        std::string decryptedText = caesarInstance.Decrypt(encryptedText);

        // Check properties of the decrypted text
        EXPECT_FALSE(encryptedText.empty());
        EXPECT_EQ(encryptedText.length(), message.length());

        // Ensure that after encryption and decryption, we get back the original message
        EXPECT_EQ(message, decryptedText);
    }
};