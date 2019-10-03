#ifndef COMPLEX_H
#define COMPLEX_H
//Каримов Данил, 2 курс, 2 группа, ПМИ.

#include "Rational.h"

// vector: (шаблон класса динамического массива)
#include <vector>

// cout, endl
#include <iostream>

//rand, srand:
#include <cstdlib>

//time:
#include <ctime>

using std::ostream;
using std::istream;
using std::rand;
using std::srand;
using std::time;
using std::vector;

class Complex
{
    //Задание 2. описание класса.
    Rational re; //поле вещ. части
    Rational im; //поле мнимой части

    //задание 4. Вывод в поток.
    //"дружественная" операция вывода в поток.
    friend ostream & operator<<(ostream &, Complex const &);

    // случайное целое в диапазоне [1, n), 1 чтобы не было ошибки с делением на 0.
    int irandom(int n=10)
    {
        return rand() / (double) RAND_MAX * n + 1;
    }

public:

    //Задание 3. Создание конструкторов.
    //Конструктор без параметров-строит 0
    Complex(): re(0), im(0) { /*  */ }

    //Конструктор с 1 парметром-Рациональное число мнимая=часть.
    Complex(Rational N);// re(N), im(0) {  }

    //Конструктор с 2 параметрами-праметры=поля.
    Complex(Rational re, Rational im): re(re), im(im) {}

    //Задача 5. Вектор случаных комплекных чисел.
    //Случайное комплексное число.
    Complex random()
    {
       Rational RE(irandom(), irandom()); //заполняем поля рациональных чисел случайными целыми
       Rational IM(irandom(), irandom());

       return Complex(RE,IM); //возвращаем комплекное "рандомное" число.
    }

    //Задача 6. Модуль комплексного числа.
    Rational abs()
    {
        Rational res; //Ответом будет рациональное число
        res=re*re+im*im; //вычисляем модуль комплексного числа
        return res; //возвращаем его
    }

    //Задание 8. Реализация += для комплексных.
    Complex operator+=(Complex const & other)
    {
        Complex res(other); //копируем правую часть
        re += res.re; //записываем в левую часть результат сложения(!рациональных!) чисел
        im += res.im;

        return *this; //возвращаем результат.
    }

};
  // вектор размера size из случайных комплексных
  // если при вызове функции второй аргумент не задан, то  max = 10
vector<Complex> complex_random_vector(int size); //Объявление ф-ции.

//Задача 8. Объявление оператора "+" для комплексных чисел
Complex operator+(Complex const & rhs, Complex const & lhs);

//Задача 8. Объявление ф-ции сложения двух векторов.
vector<Complex> sum_complex_vec(vector<Complex> v1, vector<Complex> v2);

//Задача 7. Ф-ция выводящая число из массива с наибольшим модулем.
//Объявление ф-ции: Complex max_in_vector_complex(vector<Complex> v);


// печать вектора: обратите внимание на передачу по ссылке на константу
template <typename Vec> // шаблон функции: печатает вектор любого типа
void print_vector(Vec const & v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << std::endl;
    }
}

//COMPLEX_H
#endif

