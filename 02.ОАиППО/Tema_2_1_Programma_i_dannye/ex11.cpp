#include <iostream>
#include <string>
#include <windows.h>

#include "MyConstants.h"

/* Ex №11. Использование собственного заголовочного файла. */
void ex11()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    std::cout << "\n========== EXAMPLE 11 ==========\n";

    int age;
    std::string childName = "Тимофей";

    std::cout << '\n' << FAMILY << " имеют " << KIDS << " детей\n";

    age = 11;
    std::cout << "Старший сын, " << childName
              << ", " << age << " лет.\n";

    childName = "Николай";
    age = 6;
    std::cout << "Средний сын, " << childName
              << ", " << age << ".\n";

    childName = "Борис";
    age = 3;
    std::cout << "Младший сын, " << childName
              << ", " << age << ".\n";
}
