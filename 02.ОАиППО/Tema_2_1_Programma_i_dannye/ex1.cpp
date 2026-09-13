#include <iostream>
#include <windows.h>

/* Ex №1. Вывод сообщения на экран. */
void ex1()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 1 ==========\n";
    std::cout << "Hello, Andrei!\n";
    std::cout << "The only way to learn a new programming";
    std::cout << " language \nis by writing programs in it.\n";
}
