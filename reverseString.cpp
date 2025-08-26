//accept the number and print its number and print its reverse
#include <iostream>

int main() {
    // Declare variables
    int number, originalNumber, remainder, reversedNumber = 0;

    // Get input from the user
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Save the original number for later comparison
    originalNumber = number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    //remainder=

    // Print the original and reversed numbers
    std::cout << "Original Number: " << originalNumber << std::endl;
    std::cout << "Reversed Number: " << reversedNumber << std::endl;

    return 0;
}

