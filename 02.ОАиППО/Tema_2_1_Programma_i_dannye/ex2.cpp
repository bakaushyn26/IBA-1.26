#include <iostream>
#include <windows.h>

#define FALSE 0

/* Ex №2. Программа, отображающая возможную структуру приложения. */
void ex2()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 2 ==========\n";

    int bet;
    int bank = 100;
    char suit, rank, stillPlay;

    std::cout << "The card of hearts\n";

    // Переменные оставлены как в учебном примере.
    (void)bet;
    (void)bank;
    (void)suit;
    (void)rank;
    (void)stillPlay;
}
