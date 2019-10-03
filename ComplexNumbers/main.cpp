//Каримов Данил, 2 курс, 2 группа, ПМИ.
#include <iostream>
#include "Rational.h"
#include "Complex.h"

//rand, srand:
#include <cstdlib>

//time:
#include <ctime>

using std::cin; // поток символов с клавиатуры
using std::cout;
using std::endl;

int main()
{
    cout << "Hello, Rationals!" << endl << endl;
    cout << "1 / 2 + 1 / 3 = " << Rational(1,2) + Rational(1, 3) << endl << endl;
    cout << "1 / 2 * 2 = "     << Rational(1,2) * Rational(2)    << endl << endl;

    // Сумма дробей, введённых с клавиатуры. Попробуйте сложить 1 / 2 и 1 / 2.
    /*Rational r1, r2;
    cout << "Let's sum your rationals:\n\tfirst ratio: ";
    cin >> r1;
    cout << "\tsecond ratio: ";
    cin >> r2;
    cout << "Sum: " << r1 + r2 << endl; */


    srand(time(0)); //для задачи 5

    //Задача 2-4.
    Complex a; //объявляем комплексное число
    cout <<"a=" << a << endl; //убеждаемся, что конструктор строит именно 0

    //Задача 5. Случайное комплексное и вектор случайных комплексных.
    Complex b; //комплексное число
    cout <<"random b= " << b.random() << endl; //выводим случайное НО!!! ф-ция не меняет значение b
    cout <<"real b= " << b << endl; //убедится в этом можно здесь.

    //Создаем вектор комплесных чисел.
    vector<Complex> v=complex_random_vector(5);
    //Печатаем его.
    cout << "Vector of random complex numbers: " << endl;
    print_vector(v);

    //Задача 6. Модуль комплексного числа(рациональное)
    Complex c(Rational(1,2),Rational(2,3));
    cout << "c=" << c << endl;
    cout << "abs c=" << c.abs() << endl;

    //Задача 7. Из-за не реализованного оператора, не выполнял.

    //Задача 8. Сложение комплексных чисел.
    Complex d(Rational(1), Rational(2));
    cout << "c+d= " << c+d << endl; //проверка, что оператор перегружен правильно. (РАБОТАЕТ!)

    //Задача 8. Создаем второй вектор комплексных чисел.
    vector<Complex> v2=complex_random_vector(4);
    //и печатаем его
    cout << "Second random vector" << endl;
    print_vector(v2);

    //Печатаем результат сложения векторов. Внимание! Второй вектор намеренно
    //сделан короче чем первый.
    cout << "Result function sum(vector1, vector2)" << endl;
    print_vector(sum_complex_vec(v,v2)); //печать ответа.

    //Задача 9. Не выполнил.

}

