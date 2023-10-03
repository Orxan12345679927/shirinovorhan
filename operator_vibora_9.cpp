
#include <iostream>
int main() {
    int mesyats, den;
    std::cout << "Введите порядковый номер месяца: ";
    std::cin >> mesyats;
    std::cout << "Введите число: ";
    std::cin >> den;
    if (mesyats != 1 || den != 1) {
        if (den > 1) {
            den--;
        } else {
            mesyats--;
            if (mesyats < 1) {
                mesyats = 12;
            }
            int dniVPredydushchemMesyatse;
            switch (mesyats) {
                case 4: case 6: case 9: case 11:
                    dniVPredydushchemMesyatse = 30;
                    break;
                case 2:
                    dniVPredydushchemMesyatse = 28;
                    break;
                default:
                    dniVPredydushchemMesyatse = 31;
                    break;
            }
            den = dniVPredydushchemMesyatse;
        }
        std::cout << "Дата предыдущего дня: " << mesyats << " " << den << std::endl;
    } else {
        std::cout << "Введенная дата представляет 1 января. Пожалуйста, выберите другую дату." << std::endl;
    }
    return 0;
