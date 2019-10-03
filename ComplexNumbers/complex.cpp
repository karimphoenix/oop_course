#include "Complex.h"
#include "Rational.h"
#include <iostream>
//Каримов Данил, 2 курс, 2 группа, ПМИ.

//Задание 4. Вывод в поток.
ostream & operator<<(ostream & os, Complex const & c)
{
    os << c.re << " + i" << " (" << c.im <<")"; //Результат представлен в виде
                                  // "re + i im"

    return os; //согласно договоренности-возвращаем поток.
}



//Задача 5. Вектор комплексных чисел. Реализация.
vector<Complex> complex_random_vector(int size)
{
    vector<Complex> v;
    Complex b; //Инициализируем комплексное число.
    v.reserve(size); // резервируем место под size элементов

    for (int i = 0; i < size; ++i)
    {
        v.push_back(b.random()); // добавляем в вектор очередное число вызывая метод создания случайного числа.
    }
    return v;
}

/* Task 7.
Complex max_in_vector_complex(vector<Complex> v)
{
    //Реализация не выполнена, т.к. нет оператора сравнения для Rational
    int number_of_max=1;
    Rational tmax, helpt;
    tmax=v[1].abs();
    for (int i = 0; i < v.size(); i++)
    {
        helpt=v[i].abs(); //доступ к полям Rational так же не возможен.
        if (helpt>tmax) number_of_max=i;
    } //Свой оператор сравнения писать не стал.
    return v[number_of_max];
} */ //Если бы он было, код должен был бы заработать.
//Сымсл кода: если есть число с большим модулем, записываем его номер.
//Потом вытаскиваем из массива по номеру.

//Задание 8. Реализация "+" для комплексных чисел.
Complex operator+(Complex const & rhs, Complex const & lhs)
{
    Complex result(rhs); //копируем правую часть
    result += lhs; //пользуемся определенным в complex.h оператором += для комплексных чисел

    return result; //результат вернули. Должно работать. xD
}

//Задание 8. Сложение векторов комплексных чисел.
vector<Complex> sum_complex_vec(vector<Complex> v1, vector<Complex> v2)
{
    vector<Complex> resv; //результирующий вектор.
    int length; //длина(будем записывать сюда длину наименьшего)

    if (v1.size()<v2.size()) length=v1.size(); // выборка длины наименьшего
    else
        length=v2.size();

    resv.reserve(length); //выделяем память под результирующий вектор.
    for (int i = 0; i<length; i++)
    {
        resv.push_back(v1[i]+v2[i]); //заполняем его
    }
    return resv; //возвращаем как результат работы.
}


