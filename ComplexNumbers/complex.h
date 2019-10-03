#ifndef COMPLEX_H
#define COMPLEX_H
//������� �����, 2 ����, 2 ������, ���.

#include "Rational.h"

// vector: (������ ������ ������������� �������)
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
    //������� 2. �������� ������.
    Rational re; //���� ���. �����
    Rational im; //���� ������ �����

    //������� 4. ����� � �����.
    //"�������������" �������� ������ � �����.
    friend ostream & operator<<(ostream &, Complex const &);

    // ��������� ����� � ��������� [1, n), 1 ����� �� ���� ������ � �������� �� 0.
    int irandom(int n=10)
    {
        return rand() / (double) RAND_MAX * n + 1;
    }

public:

    //������� 3. �������� �������������.
    //����������� ��� ����������-������ 0
    Complex(): re(0), im(0) { /*  */ }

    //����������� � 1 ���������-������������ ����� ������=�����.
    Complex(Rational N);// re(N), im(0) {  }

    //����������� � 2 �����������-��������=����.
    Complex(Rational re, Rational im): re(re), im(im) {}

    //������ 5. ������ �������� ���������� �����.
    //��������� ����������� �����.
    Complex random()
    {
       Rational RE(irandom(), irandom()); //��������� ���� ������������ ����� ���������� ������
       Rational IM(irandom(), irandom());

       return Complex(RE,IM); //���������� ���������� "���������" �����.
    }

    //������ 6. ������ ������������ �����.
    Rational abs()
    {
        Rational res; //������� ����� ������������ �����
        res=re*re+im*im; //��������� ������ ������������ �����
        return res; //���������� ���
    }

    //������� 8. ���������� += ��� �����������.
    Complex operator+=(Complex const & other)
    {
        Complex res(other); //�������� ������ �����
        re += res.re; //���������� � ����� ����� ��������� ��������(!������������!) �����
        im += res.im;

        return *this; //���������� ���������.
    }

};
  // ������ ������� size �� ��������� �����������
  // ���� ��� ������ ������� ������ �������� �� �����, ��  max = 10
vector<Complex> complex_random_vector(int size); //���������� �-���.

//������ 8. ���������� ��������� "+" ��� ����������� �����
Complex operator+(Complex const & rhs, Complex const & lhs);

//������ 8. ���������� �-��� �������� ���� ��������.
vector<Complex> sum_complex_vec(vector<Complex> v1, vector<Complex> v2);

//������ 7. �-��� ��������� ����� �� ������� � ���������� �������.
//���������� �-���: Complex max_in_vector_complex(vector<Complex> v);


// ������ �������: �������� �������� �� �������� �� ������ �� ���������
template <typename Vec> // ������ �������: �������� ������ ������ ����
void print_vector(Vec const & v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << std::endl;
    }
}

//COMPLEX_H
#endif

