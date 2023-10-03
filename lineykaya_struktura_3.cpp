
#include <iostream>
#include <cmath>
using namespace std;
int main() {
double a, b, c;
cout << "Введите длину стороны a:"; cin >> a;
cout << "Введите длину стороны b: "; cin >> b;
cout << "Введите длину стороны c: "; cin >> c;
double median_a = 0.5 * sqrt(2 * (b * b + c * c) - a * a); double median_b = 0.5 * sqrt(2 * (a * a + c * c) - b * b); double median_c = 0.5 * sqrt(2 * (a * a + b * b) - c * c);
cout << "Длина медианы a: " << median_a << endl; cout << "Длина медианы b: " << median_b << endl; cout << "Длина медианы c: " << median_c << endl;
return 0; }
