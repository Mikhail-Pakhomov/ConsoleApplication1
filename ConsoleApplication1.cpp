#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Калькулятор\n";

    double num1, num2, result = 0;
    char operation;

    std::cout << "Введіть перше число: ";
    std::cin >> num1;

    std::cout << "Введіть друге число: ";
    std::cin >> num2;

    std::cout << "Введіть символ операції (+, -, *, /, s): ";
    std::cin >> operation;

    switch (operation) {
    case '+':
        result = num1 + num2;
        std::cout << "Результат додавання: " << result << std::endl;
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Результат віднімання: " << result << std::endl;
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Результат множення: " << result << std::endl;
        break;
    case '/':
        if (num2 != 0) {
            result = num1 / num2;
            std::cout << "Результат ділення: " << result << std::endl;
        }
        else {
            std::cout << "Помилка: Ділення на нуль!" << std::endl;
        }
        break;
    case 's':
        result = std::sqrt(num1);
        std::cout << "Результат кореня числа: " << result << std::endl;
        break;
    default:
        std::cout << "Помилка: Неправильний символ операції!" << std::endl;
        break;
    }

    std::cout << "Введіть число для розрахунку відсотків: ";
    std::cin >> num1;

    std::cout << "Введіть відсотки: ";
    std::cin >> num2;

    double percentResult = (num1 * num2) / 100;
    std::cout << "Результат відсоткового розрахунку: " << percentResult << std::endl;

    return 0;
}