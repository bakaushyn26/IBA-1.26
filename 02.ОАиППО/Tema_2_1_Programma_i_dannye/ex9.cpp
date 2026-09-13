#include <iostream>
#include <iomanip>
#include <windows.h>

/* Ex №9. Создание переменных различного типа. */
void ex9()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 9 ==========\n";

    char firstInitial, middleInitial;
    int number_of_pencils;
    int number_of_notebooks;

    float pencils = 0.23f;
    float notebooks = 2.89f;
    float lunchbox = 4.99f;

    std::cout << std::fixed << std::setprecision(2);

    // Первый ребенок.
    firstInitial = 'J';
    middleInitial = 'R';
    number_of_pencils = 7;
    number_of_notebooks = 4;

    std::cout << firstInitial << middleInitial
              << " needs " << number_of_pencils
              << " pencils, " << number_of_notebooks
              << " notebooks, and 1 lunchbox\n";

    std::cout << "The total cost is $"
              << number_of_pencils * pencils +
                 number_of_notebooks * notebooks +
                 lunchbox
              << "\n\n";

    // Второй ребенок.
    firstInitial = 'A';
    middleInitial = 'J';
    number_of_pencils = 10;
    number_of_notebooks = 3;

    std::cout << firstInitial << middleInitial
              << " needs " << number_of_pencils
              << " pencils, " << number_of_notebooks
              << " notebooks, and 1 lunchbox\n";

    std::cout << "The total cost is $"
              << number_of_pencils * pencils +
                 number_of_notebooks * notebooks +
                 lunchbox
              << "\n\n";

    // Третий ребенок.
    firstInitial = 'M';
    middleInitial = 'T';
    number_of_pencils = 9;
    number_of_notebooks = 2;

    std::cout << firstInitial << middleInitial
              << " needs " << number_of_pencils
              << " pencils, " << number_of_notebooks
              << " notebooks, and 1 lunchbox\n";

    std::cout << "The total cost is $"
              << number_of_pencils * pencils +
                 number_of_notebooks * notebooks +
                 lunchbox
              << '\n';
}
