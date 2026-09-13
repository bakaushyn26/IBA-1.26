#include <iostream>
#include <iomanip>
#include <windows.h>

/* Ex №4. Подсчет суммы расходов на подарки в праздники. */
void ex4()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 4 ==========\n";

    float gift1, gift2, gift3, gift4, gift5;
    float total;

    std::cout << "Сколько вы хотите потратить на маму? ";
    std::cin >> gift1;

    std::cout << "Сколько вы хотите потратить на папу? ";
    std::cin >> gift2;

    std::cout << "Сколько вы хотите потратить на сестру? ";
    std::cin >> gift3;

    std::cout << "Сколько вы хотите потратить на брата? ";
    std::cin >> gift4;

    std::cout << "Сколько вы хотите потратить на своего любимого "
              << "автора книг по программированию на C? ";
    std::cin >> gift5;

    total = gift1 + gift2 + gift3 + gift4 + gift5;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nОбщая сумма, которую вы потратите на подарки: $"
              << total << '\n';
}
