#include <iostream>
#include <string>

int main() {
    std::string message;
    int ShiftValue;

    std::cout << "Hello Human!" << std::endl;
    std::cout << "This is a program for Encrypting and Decrypting messages using the Caesar Cipher." << std::endl;

    std::cout << "Enter the message you would like to encrypt or decrypt: ";
    std::getline(std::cin, message);

    std::cout << "Enter the shift value:";
    std::cin >> ShiftValue;

    std::cout << "Message: " << message << std::endl;
    std::cout << "Shift Value: " << ShiftValue << std::endl;
    
    return 0;
}