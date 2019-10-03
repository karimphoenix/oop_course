#include <iostream>
#include "Rational.h"
//Каримов Данил, 2 курс, 2 группа, ПМИ.
// чтобы не писать префикс std:: нужно:
using std::cout;
using std::endl;

int main()
{
    cout << "Hello, Rationals!" << endl;

    // Задача 1
    Rational a;

    // доступ к полям a закрыт (можете попробовать раскомментировать и
    // запомнить текст ошибки):
    // cout << a.num;

    // Задача 2 и 3:
    cout << a <<endl; // после решения задачи 2 распечатает мусор, а после задачи 3 - 0
                //endl добавил для наглядности вывода(перенос строки)
    // Задача 3:
     Rational b(1, 2);
     cout << b << endl;

    // Задача 4:
     cout << Rational(1, 2) * Rational(2, 1) << endl; // => 1

    // Задача 5: проверить inv и / самостоятельно
    Rational c(2,3); //создаем элемент для проверки "обратить"
    c.inv(); //обращаем дробь
    cout << c << endl; //выводим на печать

    cout << Rational(1,2) / Rational(2,1) << endl; //проверка оператора "/" Ответ: 1|4

    // Задача 6:
    // Пример печати массива целых:
    int arr[] = {1, 2, 3};
    int arr_len = sizeof(arr) / sizeof(*arr);
    // работает:
    print_array(arr, arr_len);

    // массив дробей:
    Rational a_rat[] = { Rational(1,4), Rational(2,3), Rational(2,5)};

    int length_a_rat = sizeof(a_rat) / sizeof(*a_rat);
    print_array(a_rat, length_a_rat);
    /* определение длины a_rat и печать a_rat совершенно так же,
       как для массива arr выше */

    cout <<"Result Multiply "<< mul(a_rat,length_a_rat) << endl;



    //ДОМАШНЯЯ РАБОТА ПОСЛЕ ЭТОЙ СТРОКИ!!!
    //Задание 2. Конструктор с 1 полем(числитель). (HW)
    cout << endl << "NOW HOMEWORK!!!" << endl << endl;
    Rational hw1(4);
    cout << hw1 << endl; //на печать получаем 4.

    //Задание 3. Контроль несократимости дробей. (HW)
    //cout << gcd(4,2); проверка gcd
    //normalize проверенна-работает.

}
