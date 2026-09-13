#include <iostream>
#include <string>
#include <windows.h>

/* Ex №12. Взаимодействие с пользователем через std::cin. */
void ex12()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 12 ==========\n";

    std::string firstInitial;
    std::string lastInitial;
    int age;
    int favoriteNumber;

    std::cout << "С какой буквы начинается Ваша фамилия?\n";
    std::cin >> firstInitial;

    std::cout << "С какой буквы начинается Ваше имя?\n";
    std::cin >> lastInitial;

    std::cout << "Сколько Вам лет?\n";
    std::cin >> age;

    std::cout << "Какое Ваше любимое число? (Только целое)\n";
    std::cin >> favoriteNumber;

    std::cout << "\nВаши инициалы: "
              << firstInitial << '.' << lastInitial
              << "., и вам " << age << " лет\n";

    std::cout << "Ваше любимое число "
              << favoriteNumber << ".\n\n";
}
