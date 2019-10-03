//������� �����, 2 ����, 2 ������, ���.
#include <iostream>
#include "Rational.h"
#include "Complex.h"

//rand, srand:
#include <cstdlib>

//time:
#include <ctime>

using std::cin; // ����� �������� � ����������
using std::cout;
using std::endl;

int main()
{
    cout << "Hello, Rationals!" << endl << endl;
    cout << "1 / 2 + 1 / 3 = " << Rational(1,2) + Rational(1, 3) << endl << endl;
    cout << "1 / 2 * 2 = "     << Rational(1,2) * Rational(2)    << endl << endl;

    // ����� ������, �������� � ����������. ���������� ������� 1 / 2 � 1 / 2.
    /*Rational r1, r2;
    cout << "Let's sum your rationals:\n\tfirst ratio: ";
    cin >> r1;
    cout << "\tsecond ratio: ";
    cin >> r2;
    cout << "Sum: " << r1 + r2 << endl; */


    srand(time(0)); //��� ������ 5

    //������ 2-4.
    Complex a; //��������� ����������� �����
    cout <<"a=" << a << endl; //����������, ��� ����������� ������ ������ 0

    //������ 5. ��������� ����������� � ������ ��������� �����������.
    Complex b; //����������� �����
    cout <<"random b= " << b.random() << endl; //������� ��������� ��!!! �-��� �� ������ �������� b
    cout <<"real b= " << b << endl; //�������� � ���� ����� �����.

    //������� ������ ���������� �����.
    vector<Complex> v=complex_random_vector(5);
    //�������� ���.
    cout << "Vector of random complex numbers: " << endl;
    print_vector(v);

    //������ 6. ������ ������������ �����(������������)
    Complex c(Rational(1,2),Rational(2,3));
    cout << "c=" << c << endl;
    cout << "abs c=" << c.abs() << endl;

    //������ 7. ��-�� �� �������������� ���������, �� ��������.

    //������ 8. �������� ����������� �����.
    Complex d(Rational(1), Rational(2));
    cout << "c+d= " << c+d << endl; //��������, ��� �������� ���������� ���������. (��������!)

    //������ 8. ������� ������ ������ ����������� �����.
    vector<Complex> v2=complex_random_vector(4);
    //� �������� ���
    cout << "Second random vector" << endl;
    print_vector(v2);

    //�������� ��������� �������� ��������. ��������! ������ ������ ���������
    //������ ������ ��� ������.
    cout << "Result function sum(vector1, vector2)" << endl;
    print_vector(sum_complex_vec(v,v2)); //������ ������.

    //������ 9. �� ��������.

}

