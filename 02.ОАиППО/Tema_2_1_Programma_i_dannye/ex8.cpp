#include <iostream>
#include <iomanip>
#include <windows.h>

/* Ex №8. Использование форматированного вывода данных. */
void ex8()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 8 ==========\n";

    std::cout << "Quantity\tCost\tTotal\n";
    std::cout << 3 << "\t\t$"
              << std::fixed << std::setprecision(2) << 9.99
              << "\t$" << 29.97 << '\n';

    std::cout << "Too many spaces \b\b\b\b can be fixed with the ";
    std::cout << ' ' << 'b' << " Escape character\n";

    std::cout << "\n\a\n\n\nSkip a few lines, and beep";
    std::cout << "You are kicking butt learning " << 'C' << '.';

    std::cout << "You just finished chapter " << 4
              << ".\nYou have finished ";

    std::cout << std::fixed << std::setprecision(1)
              << 12.500 << '%' << " of the book.\n";

    const double oneThird = 0.333333;

    std::cout << "\n\nOne third equals "
              << std::fixed << std::setprecision(2) << oneThird << " or ";

    std::cout << std::setprecision(3) << oneThird << " or ";
    std::cout << std::setprecision(4) << oneThird << " or ";
    std::cout << std::setprecision(5) << oneThird << " or ";
    std::cout << std::setprecision(6) << oneThird << "\n\n\n";
}
