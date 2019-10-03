#include "Rational.h"
//Каримов Данил, 2 курс, 2 группа, ПМИ.
// Задача 2. Операция вывода в поток: реализация.
ostream & operator<<(ostream & os, Rational const & r) {
    os<<r.num;
    if (r.num != 0 && r.den != 1) /*проверка, что чеслительно дроби не 0
        а знаменать не 1, чтобы написать "|" (визуализвация дроби) */
    os<<"|" << r.den;
    // добавить вывод полей обебкта r в os с помощью <<

    // соглашение:
    return os; // в конце operator<< всегда возвращается первый параметр
}


// Задача 4. Операция умножения дробей: реализация.
Rational operator*(Rational const & lhs, Rational const & rhs) {
    Rational res(lhs); // создаём копию левого аргумента

    res*=rhs;
    // используем определённый нами ранее *=

    return res; // возвращаем результат
}
//Задача 5. Операция деления дробей. Реализация.
Rational operator/(Rational const & lhs, Rational const & rhs)
{
    Rational helpt(lhs); //вспомогательный элемент(копия левой части выражения)

    helpt/=rhs; //вызываем отпределенный нами /=


    return helpt;
}
//Задача 6. Операция перемножения массива дробей. Реализация.
Rational mul(Rational * arr, int n)
{
    Rational sum(1,1);
    for (int i = 0; i<n; i++)
        sum=sum*arr[i];
    return sum;
}


//ДОМАШНЯЯ РАБОТА ПОСЛЕ ЭТОЙ СТРОКИ.
//Задание 3. Контроль несокротимости дробей. (HW)
int gcd(int n, int m) //Нахождение НОД.
{
    if (m==0) return n; //алгоритм описан в задании.
    else
        if (n<m)
            return gcd(m,n);
        else
            return gcd(m, n% m);
}
