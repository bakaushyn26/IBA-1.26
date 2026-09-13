#include <iostream>
#include <string>
#include <windows.h>

/* Ex №10. Дети и их любимые супергерои. */
void ex10()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 10 ==========\n";

    std::string kid1 = "Katie";
    std::string kid2 = "Maddie";
    std::string kid3 = "Andrew";

    std::string hero1 = "Batman";
    std::string hero2 = "Spiderman";
    std::string hero3 = "The Incredible Hulk";

    std::cout << kid1 << "'s favorite hero is " << hero1 << ".\n";
    std::cout << kid2 << "'s favorite hero is " << hero2 << ".\n";
    std::cout << kid3 << "'s favorite hero is " << hero3 << ".\n";
}
