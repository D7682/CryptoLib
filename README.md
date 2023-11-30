# CryptoLib

CryptoLib is a C++ library that provides implementations of various cryptographic algorithms, with a focus on simplicity, modularity, and ease of integration into other projects. This project aims to offer a collection of well-documented and tested cryptographic algorithms, making it a valuable resource for developers working on security-related applications.

## Features

- **Caesar Cipher Implementation:** Includes a C++ implementation of the classic Caesar cipher with encryption and decryption functionalities.

- **Substitution Cipher Implementation:** Provides a C++ implementation of a substitution cipher, expanding the library's capabilities.

- **Test-Driven Development:** Utilizes Google Test for comprehensive unit testing, ensuring the reliability of cryptographic functionalities.

- **Modular Structure:** Organizes algorithms into separate files and directories, allowing for easy extension and maintenance.

## Getting Started

To get started with CryptoLib, follow the steps outlined below.

### Prerequisites

- C++ compiler
- CMake
- Google Test (for testing)

### Installation

```bash
# Clone the repository
git clone https://github.com/D7682/CryptoLib.git

# Navigate to the project directory
cd CryptoLib

# Create a build directory
mkdir build
cd build

# Generate build files
cmake ..

# Build the project
make
```

### Usage
Include CryptoLib in your C++ project:
```cpp
#include "CryptoLib/Caesar.h"

int main() {
CryptoLib::Caesar caesarInstance;
// Your code here
return 0;
}
```

## Testing
Run tests using:

```bash
./CryptoLibTests
```

## Contributions
Contributions are welcome! If you'd like to contribute to CryptoLib or report issues, please follow the [contribution guidelines]("https://github.com/").

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.