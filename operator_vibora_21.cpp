#include <iostream>
int main() {
    int digit;
std::cout << "Enter a single digit (0-9): ";
    std::cin >> digit;
if (digit < 0 || digit > 9) {
std::cout << "Invalid input. Please enter a digit between 0 and 9." << std::endl;
    return 1;
}
int square = (digit * digit) % 10;
std::cout << "The last digit of the square of " << digit << " is: " << square << std::endl;
return 0; }
