#include "Archive.h"
//Каримов Данил, 2 курс, 2 группа , ПМИ.
#include <iostream>

using namespace std;
//Задание 5. Реализация записи в архив с клавиатуры.
istream & operator>>(istream & is, Archive & AR)
{
    is >> AR.Archive_id; //номер архива читаем с клавиатуры.
    Citizen TCp("NAME", MALE, 18); //создаем "временного" гражданина
    is >> TCp; //записываем его используя >> для Citizen
    AR.insert_to_archive(TCp); //и добавляем в архив.

    assert(is); //проверяем целостность потока.
    return is;
}

