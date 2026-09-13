#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>

/*
    Ex №13. Программа запрашивает данные у пользователя
    и выводит введенные значения.
*/
void ex13()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 13 ==========\n";

    std::string topping;
    int slices = 0;
    int month, day, year;
    char slash1, slash2;
    float price;

    std::cout << "Сколько стоит пицца в вашем районе?\n";
    std::cout << "(Введите как XX.XX)\n";
    std::cin >> price;

    std::cout << "Какая ваша любимая начинка (одним словом)?\n";
    std::cin >> topping;

    std::cout << "Сколько пицц с начинкой "
              << topping << " вы можете съесть за раз?\n";
    std::cin >> slices;

    std::cout << "Какое сегодня число? "
              << "(Введите в формате MM/DD/YYYY)\n";

    std::cin >> month >> slash1 >> day >> slash2 >> year;

    std::cout << "\nПочему бы не угостить себя ужином "
              << month << '/' << day << '/' << year;

    std::cout << "\nи не съесть " << slices
              << " пиццы с начинкой " << topping << "?\n";

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Это будет стоить лишь $"
              << price * slices << "!\n\n";
}
