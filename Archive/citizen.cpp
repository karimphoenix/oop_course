#include "citizen.h"
#include <istream>
//Каримов Данил, 2 курс, 2 группа , ПМИ.
using namespace std;
//Задание 3. Печать архива.
ostream & operator<<(ostream & os, Citizen const & CP) //перегружаем оператор << для Citizen
{
    os << "Name: " << CP.name <<endl;  //выводим строку-имя
    os << "Sex: " << CP.gender <<endl; //пол
    os << "Age: " << CP.age <<endl; //возраст

    return os;
}

//Задание 4. Сортировка архива.
bool cmpNames (Citizen const & ct1, Citizen const & ct2)
{
    string s1=ct1.getName(); //получаем имя одного из Гражданинов
    string s2=ct2.getName(); //И второго тоже
    if (s1<s2) return 1; //Сортируем их
    else return 0; //если не верный порядок-тогда 0
}

istream & operator>>(istream & is, Gender & SEX) //перегружаем >> для типа Gender
{
    is >> SEX;
    assert(is);
    return is;
}

istream & operator>>(istream & is, Citizen & CP) //перегрузка >> для Citizenб чтобы использовать её далее
{
    is >> CP.name; //ввод имени
    is >> CP.gender; //ввод пола
    is >> CP.age; //ввод возраста

    assert(is); //проверяем что поток цел.
    return is;
}

