// Программа считает количество букв, цифр, пробелов и знаков препинания в строке

#include <iostream>  // Для ввода-вывода
#include <string>    // Для работы со строками
#include <cctype>    // Для проверки символов (isalpha, isdigit и т.д.)
#include <windows.h> // Для установки кодировки UTF-8 в консоли Windows

int main() {
    // Установка кодировки UTF-8 для корректного отображения кириллицы
    SetConsoleCP(65001);        // Кодировка ввода
    SetConsoleOutputCP(65001);  // Кодировка вывода

    std::string text;  // Введённая строка
    int letters = 0, digits = 0, spaces = 0, punctuation = 0;  // Счётчики

    std::cout << "Введите строку: ";  // Запрос строки
    std::getline(std::cin, text);     // Считывание всей строки (включая пробелы)

    // Проход по каждому символу строки
    for (char c : text) { // Используем range-based for для удобства
        if (std::isalpha(static_cast<unsigned char>(c))) { // Проверка на букву
            letters++;      // Буква
        } else if (std::isdigit(static_cast<unsigned char>(c))) { // Проверка на цифру
            digits++;       // Цифра
        } else if (c == ' ') {
            spaces++;       // Пробел
        } else {
            punctuation++;  // Знак препинания или другой символ
        }
    }

    // Вывод статистики
    std::cout << "Букв: " << letters << "\n";
    std::cout << "Цифр: " << digits << "\n";
    std::cout << "Пробелов: " << spaces << "\n";
    std::cout << "Знаков препинания: " << punctuation << "\n";

    return 0;  // Успешное завершение программы
}
// chto to