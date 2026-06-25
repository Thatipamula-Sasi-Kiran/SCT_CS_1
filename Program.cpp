#include <iostream>
#include <string>

int encryptMessage (std::string message, int ShiftValue)
{
    std::string encrypted;

    /*if (message[0] >= 'A' && message[0] <= 'Z')
    {
        encrypted = ((message[0] - 'A' + ShiftValue) % 26) + 'A';
    }*/

   if (message.length() > 0)
   {
    for (int i = 0; i < message.length(); i++)
    {
        if (message[i] >= 'A' && message[i] <= 'Z')
        {
            encrypted += ((message[i] - 'A' + ShiftValue) % 26) + 'A';
        }
        else if (message[i] >= 'a' && message[i] <= 'z')
        {
            encrypted += ((message[i] - 'a' + ShiftValue) % 26) + 'a';
        }
    }
   }

    std::cout << "Message: " << message << std::endl;
    std::cout << "Shift Value: " << ShiftValue << std::endl;
    std::cout << "Encrypted Message: "<< encrypted << std::endl;
}

int decryptMessage (std::string message, int ShiftValue)
{
    std::string decrypted ;
    
   if (message.length() > 0)
   {
    for (int i = 0; i < message.length(); i++)
    {
        if (message[i] >= 'A' && message[i] <= 'Z')
        {
            decrypted += ((message[i] - 'A' - ShiftValue + 26) % 26) + 'A';
        }
        else if (message[i] >= 'a' && message[i] <= 'z')
        {
            decrypted += ((message[i] - 'a' - ShiftValue + 26) % 26) + 'a';
        }
    }
   }

    std::cout << "Message: " << message << std::endl;
    std::cout << "Shift Value: " << ShiftValue << std::endl;
    std::cout << "Decrypted Message: "<< decrypted << std::endl;
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
    //std::getline(std::cin, message);
    std::cin >> message;

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
    
    return 0;
}

