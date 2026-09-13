#include <iostream>
#include <iomanip>
#include <windows.h>

/* Ex №3. Символы, целые числа и числа с плавающей точкой. */
void ex3()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 3 ==========\n";

    std::cout << "Я изучаю язык программирования " << 'C' << '\n';
    std::cout << "Я только что дочитал раздел " << 1 << '\n';

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Я на " << 99.9 << " процентов готов перейти ";
    std::cout << "к следующему разделу!\n";
}
