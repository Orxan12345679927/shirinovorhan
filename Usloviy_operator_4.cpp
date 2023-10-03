#include <iostream>
int main() {
int a, b, c, d;
std::cout << "Введите четыре целых числа "; std::cin >> a >> b >> c >> d;
int largest1, largest2;
if (a > b) {
largest1 = a;
largest2 = b; } else {
largest1 = b;
largest2 = a; }
if (c > largest1) { largest2 = largest1; largest1 = c;
} else if (c > largest2) { largest2 = c;
}
if (d > largest1) {
largest2 = largest1;
largest1 = d;
} else if (d > largest2) {
largest2 = d; }
int sum = largest1 + largest2;
std::cout << "Сумма двух наибольших целых чисел составляет: " << sum << std::endl; return 0;
}
