#1
#include <iostream>
#include <string>
#include <typeinfo>

int main() {
    int integer;
    double decimal;
    std::string text;
    
    std::cout << "Введите целое число: ";
    std::cin >> integer;
    std::cout << "Введите дробное число: ";
    std::cin >> decimal;
    std::cin.ignore();
    std::cout << "Введите строку: ";
    std::getline(std::cin, text);
    
    std::cout << "Значение: " << integer << ", тип: " << typeid(integer).name() << "\n";
    std::cout << "Значение: " << decimal << ", тип: " << typeid(decimal).name() << "\n";
    std::cout << "Значение: " << text << ", тип: " << typeid(text).name() << "\n";
    //Завершение программы
    return 0;
}


#2
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    double a, b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Сумма: " << a + b << "\n";
    std::cout << "Разность: " << a - b << "\n";
    std::cout << "Произведение: " << a * b << "\n";
    std::cout << "Деление: " << a / b << "\n";
    std::cout << "Целочисленное деление: " << static_cast<int>(a) / static_cast<int>(b) << "\n";
    std::cout << "Остаток: " << std::fmod(a, b) << "\n";
    std::cout << "Степень: " << std::pow(a, b) << "\n";
    
    return 0;
}

#3
#include <iostream>
#include <iomanip>

int main() {
    int seconds;
    std::cout << "Введите количество секунд: ";
    std::cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int secs = seconds % 60;

    std::cout << std::setfill('0') << std::setw(2) << hours << ":"
              << std::setw(2) << minutes << ":" << std::setw(2) << secs << "\n";
    return 0;
}