#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    int num1, num2;

    // Ввод первого числа
    std::cout << "Введите первое целое число: ";
    std::cin >> num1;

    // Ввод второго числа
    std::cout << "Введите второе целое число: ";
    std::cin >> num2;

    // Сложение
    int sum = num1 + num2;
    std::cout << "Сумма " << num1 << " и " << num2 << " ровна: " << sum << '\n';

    // Вычитание
    int difference = num1 - num2;
    std::cout << "Разница " << num1 << " и " << num2 << " ровна: " << difference << '\n';

    return 0;
}
