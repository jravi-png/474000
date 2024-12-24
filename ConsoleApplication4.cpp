// main.cpp
#include <iostream>
#include "my_string_utils.h"

int main() {
    const char* source = "Hello, World!";
    char destination[50];

    // Using inline versions of strcpy and strlen
    inline_strcpy(destination, source);
    std::cout << "Copied String: " << destination << std::endl;
    std::cout << "Length of String: " << inline_strlen(destination) << std::endl;

    return 0;
}