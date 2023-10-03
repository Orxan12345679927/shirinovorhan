#include <iostream> #include <cmath>
int main() { int num;
std::cout << "Введите трехзначное число "; std::cin >> num;
int written_number = num; int digit1 = num % 10;
num /= 10;
int digit2 = num % 10;
num /= 10;
int digit3 = num % 10;
int square = written_number* written_number;
int sumOfCubes = pow(digit1, 3) + pow(digit2, 3) + pow(digit3, 3);
if (square == sumOfCubes) {
std::cout << "Квадрат числа равен сумме кубов его цифр" << std::endl; }
else {
std::cout << "Квадрат числа не равен сумме кубов его цифр" << std::endl; }
}
