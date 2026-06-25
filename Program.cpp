#include <iostream>
#include <string>

int encryptMessage (std::string message, int Shiftvalue)
{
    
}

int decryptMessage (std::string message, int Shiftvalue)
{
    
}

int main() {
    std::string message;
    int ShiftValue;

    std::cout << "Hello Human!" << std::endl;
    std::cout << "This is a program for Encrypting and Decrypting messages using the Caesar Cipher." << std::endl;

    std::cout << "Do you want to encrypt or decrypt a message? (Enter 'e' or 'd'): ";
    char choice;
    std::cin >> choice;

    std::cout << "Enter the message you would like to encrypt or decrypt: ";
    std::getline(std::cin, message);

    std::cout << "Enter the shift value:";
    std::cin >> ShiftValue;

    if (choice == 'e' || choice == 'E')
    {
        encryptMessage(message, ShiftValue);
    }
    else if (choice == 'd' || choice == 'D')
    {
        decryptMessage(message, ShiftValue);
    }

    std::cout << "Message: " << message << std::endl;
    std::cout << "Shift Value: " << ShiftValue << std::endl;
    
    return 0;
}

