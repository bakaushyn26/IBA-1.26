#include <iostream>
#include <windows.h>

/* Ex №6. Использование однострочного комментария. */
void ex6()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 6 ==========\n";
    std::cout << "I like these new comments!\n"; // Простое выражение

    // В PDF внутри void ex6() было return 0;
    // Здесь это исправлено: void-функция не возвращает числовое значение.
}
