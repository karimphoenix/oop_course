#ifndef RATIONAL_H
#define RATIONAL_H
//Каримов Данил, 2 курс, 2 группа, ПМИ.
#include <iostream>
#include <cassert>

using std::ostream;

// Рациональное число
class Rational {
    /* Задача 1. Объявление класса.                                           */
    int num;/*  добавить поля для числителя (numerator) */
    int den;/* и знаменателя (denominator)                                      */

    /* Задача 2. Вывод в поток объектов класса -- для
                 печати на консоль.                                           */
    // заголовок и дружба:
    friend ostream & operator<<(ostream &, Rational const &);
    // !!!дописать реализацию сокращения дроби!!!. //-требуется в дз, так что после сделаю.

    //ТЕПЕРЬ ПИШУ СОКРАЩЕНИЕ ДРОБИ!!!!
    //ДОМАШНЯЯ РАБОТА!!!.
    //Задание 3. Сокращение дроби.
    friend int gcd(int n, int m);
    void normalize() { //фун-ция нормализации дроби
        int tgcd=gcd(abs(num), den);
        num=num/tgcd;
        den=den/tgcd;
        }

// начинается секция общедоступных (public) членов класса
public:

    /* Задача 3. Конструкторы класса.                                         */
    /* Конструктор #1 -- без параметров, создаёт дробь = 0                    */
    /* раскомментировать список инициализации полей (после символа ')') */
    Rational( /* пустой список параметров */ ): num(0), den(1)
    {
        /*пустое тело*/
    }


    /*       конструктор #2, инициализирующий поля
             класса значениями двух своих параметров с
             помощью списка инициалиацзии                   */

    Rational(int n,int d):num(n),den(d){ assert(den>0); } //assert(den>0) проверяет, что den>0.
                                                        //Иначе, выдает ошибку и завершает программу.

    /* Задача 4. Умножение дробей. */
    Rational & operator*=(Rational const & other)
    {
        //   умножить значнеия полей num/den текущего объекта
        //     на значения полей num/den объекта other
         num *= other.num;
         den *= other.den;

         normalize();

        // соглашение:
        return *this; // возвращаем себя (this это указатель на текущий объект)
    }

    /* Задача 5. Инвертирование дроби: a/b -> b/a.                            */
    Rational & inv()
    {
       assert(num!=0); //проверка что знаменатель не будет равен 0
       int helpt; //вспомогательная переменная для свапа
       helpt=num;  //реализация свапа значений
       num=den;
       den=helpt;
    return *this;

    }

    Rational & operator/=(Rational const & other)
    {
        //   умножить значнеия полей num/den текущего объекта
        //     на значения полей num/den объекта other
        Rational copyt(other); //копируем правую часть выражения
        copyt.inv(); //инвертируем её
        num *= copyt.num; //используем *=
        den *= copyt.den;
        normalize();

        return *this;  // возвращаем себя (this это указатель на текущий объект)
    }

    //ДОМАШНЯЯ РАБОТА ПОСЛЕ ЭТОЙ СТРОКИ.
    //Задание 2. Конструктор с 1 параметром. (HW)
    Rational(int N): num(N), den(1) {}


};

// Задача 4. Операция умножения дробей: заголовок.
Rational operator*(Rational const & lhs, Rational const & rhs);

//Задача 5. Операция деления дробей. Заголовок.
Rational operator/(Rational const & lhs, Rational const & rhs);

// Задача 6. Массивы

// печать массива типа T, T -- параметр-тип
template <typename T>
void print_array(T * arr, int n) {
    using std::cout;
    using std::endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

// перемножение всех дробей в данном массиве
Rational mul(Rational * arr, int n);


// RATIONAL_H:
#endif
