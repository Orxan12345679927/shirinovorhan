#include <iostream> int main(){
int num;
std::cout << "Введите четырёхзначное число. "; std::cin >> num;
int dig;
bool four = false; while (num > 0) {
dig = num % 10; if (dig == 4) {
four = true;
break; }
num /= 10; }
if (four) {
std::cout << "Цифра 4 присутствует в числе" << std::endl;
} else {
std::cout << "Цифра 4 отсутствует в числе." << std::endl;
} }
