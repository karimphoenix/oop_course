#include <iostream>
//Каримов Данил, 2 курс, 2 группа , ПМИ.
#include "Archive.h"


using namespace std;

int main()
{
    //Задание 3.
    int Number=1; //Номер архива

    Citizen Cp1("Vasya", MALE, 18); //Объявляем гражданинов, которых запишем
    Citizen Cp2("Tanya", FEMALE, 18); //в архив.

    Archive LCp(Number); //Создаем архив с номером Nymber (1)

    LCp.insert_to_archive(Cp1); //Добавляем в архив заданных ранее нами граждан
    LCp.insert_to_archive(Cp2);

    LCp.print_Archive(); //Печатаем архив на консоль.

    LCp.print_Archive_in_file(); //Печаем архив в ф-л.

    //Задание 4. Сортировка ахива.
    LCp.sortByName(); //Сортируем архив.
    cout << "Sort Archive:" << endl << endl;
    LCp.print_Archive(); //Печатаем отсортированный.

    //Задание 5. Реализовано.
}
