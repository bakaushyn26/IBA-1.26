#include <iostream>
#include <windows.h>

/* Ex №7. Использование управляющих последовательностей. */
void ex7()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 7 ==========\n";

    std::cout << "Column A\tColumn B\tColumn C";
    std::cout << "\nMy Computer\'s Beep Sounds Like This:\a!\n";
    std::cout << "\"Letz\bs fix that typo and then show the backslash ";
    std::cout << "character \\\" she said\n";
}
