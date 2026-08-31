#include <iostream> // a file from standard library import, io = input/output stream

int main() {
    int file_size = 0; // "int" is variable type, "file_size" is name of variable. Set to value = "initializing"
    int counter = 0;
    double scales = 9.99;
    // standard library = std:: opens up many features we can use
    // cout = "character out"
    std::cout << "Hello World!\n";
    std::cout << file_size;
    return 0; // return 0 to tell operating that program terminated correctly
}

/* "compile" means you translate the C++ code to "machine code"
 * ("machine code" means a language that your operating system can understand: MacOS specific)
 * First compile, then execute.
 */