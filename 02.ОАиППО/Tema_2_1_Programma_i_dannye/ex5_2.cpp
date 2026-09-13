#include <iostream>
#include <iomanip>
#include <windows.h>

/* Ex №5.2. Тот же код, но нормально отформатированный. */
void ex5_2()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 5.2 ==========\n";

    float a, b;

    std::cout << "Какой бонус вы получили? ";
    std::cin >> a;

    b = .85f * a;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Если отдадите 15 процентов, ";
    std::cout << "у вас все еще останется " << b << ".\n";
}
