#include <iostream>
#include <iomanip>
#include <windows.h>

/*
    Ex №5.1. Использование неформатированного кода.
    Намеренно записан плотной строкой, чтобы сохранить смысл примера.
*/
void ex5_1()
{
    SetConsoleCP(65001); SetConsoleOutputCP(65001); std::cout << "\n========== EXAMPLE 5.1 ==========\n"; float a, b; std::cout << "Какой бонус вы получили? "; std::cin >> a; b = .85f * a; std::cout << std::fixed << std::setprecision(2) << "Если отдадите 15 процентов на благотворительность, у вас все еще останется " << b << ".\n";
}
