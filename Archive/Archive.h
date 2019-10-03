#ifndef ARCHIVE_H
#define ARCHIVE_H
//Каримов Данил, 2 курс, 2 группа , ПМИ.
#include <list>
#include <iostream>
#include <fstream>

#include "citizen.h"

using namespace std;
// Задание 2. Создать класс Archive.
class Archive
{
    list<Citizen> Citizens; //поле/список граждан
    int Archive_id; //номер архива.

    //Задание 5. Запись в архив с клавиатуры.
    friend istream & operator>>(istream & , Archive &);

public:

    Archive (int ID): Archive_id(ID) {} //конструктор архива с номером ID

    void insert_to_archive(Citizen const & LC) //вставка в список граждан
    {
        Citizens.push_back(LC); //исп. push_back из класса list
    }
    //Задание 3. Печать.
    void print_Archive () //ф-ция член класса печатающая этот архив.
    {
        cout << "Archive Id: " << Archive_id << endl; //Печатаем номер архива
        typedef list<Citizen>::const_iterator It; // тип итератора --
                                            // обобщённого указателя

        for (It it = Citizens.begin(); it != Citizens.end(); ++it) //Печатаем список.
            cout << *it << endl; //по ссылке на ячейку памяти, содержащую элемент списка.
    }
    //Задание 3. Печать в ф-л.
    void print_Archive_in_file()
    {
        ofstream fout("archive.txt"); //связываем fout и archive.txt
        fout << "Archive Id:" << Archive_id << endl; //Печатаем туда строку с номером архива.

        typedef list<Citizen>::const_iterator It;

        for (It it = Citizens.begin(); it != Citizens.end(); ++it) //Печатаем список в ф-л.
            fout << *it << endl;
    }

    //Задание 4. Сортировка архива.
    void sortByName()
    {
        Citizens.sort(cmpNames); //используя стадартную сортировку сортируем архив
            //по именам граждан.
    }
};

//Каримов Данил, 2 курс, 2 группа , ПМИ.

#endif ARCHIVE_H // ARCHIVE_H
