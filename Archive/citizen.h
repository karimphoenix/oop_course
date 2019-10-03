#ifndef CITIZEN_H
#define CITIZEN_H
//Каримов Данил, 2 курс, 2 группа , ПМИ.
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

//Задание 1. Создать класс Citizen
enum Gender {MALE, FEMALE};

class Citizen
{
    string name; //Имя гражданина
    Gender gender; //Его пол
    int age; //И возраст

    friend ostream & operator<<(ostream &, Citizen const &); //перегружаем оператор << для последующей печати
    friend bool cmpNames(Citizen const &, Citizen const &); //"дружественная" ф-ция сравнения двух Граждан.
    friend istream & operator>>(istream &, Citizen &); //Запись гражданина с клавиатуры.

public:

    Citizen(string NAME, Gender SEX, int HOW_OLD):name(NAME),  gender(SEX), age(HOW_OLD)
                                                {assert(SEX>-1); assert(SEX<2);} //конструктор класса

    //Задание 4. Сортировка архива.
    string getName() const {return name;}

};


#endif // CITIZEN_H
