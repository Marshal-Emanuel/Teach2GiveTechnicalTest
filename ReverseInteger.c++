/* Reverse Integer
Write a program that takes an integer as input and returns an integer with reversed digit 
ordering.
*/
#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    // Convert the integer to a string
    std::string numString = std::to_string(num);

    // Print each digit as a character in reverse order
    std::cout << "Digits in reverse order: ";
    for (int i = numString.length() - 1; i >= 0; --i) {
        std::cout << numString[i];
    }
    std::cout << std::endl;

    return 0;
}
