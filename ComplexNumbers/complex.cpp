#include "Complex.h"
#include "Rational.h"
#include <iostream>
//������� �����, 2 ����, 2 ������, ���.

//������� 4. ����� � �����.
ostream & operator<<(ostream & os, Complex const & c)
{
    os << c.re << " + i" << " (" << c.im <<")"; //��������� ����������� � ����
                                  // "re + i im"

    return os; //�������� ��������������-���������� �����.
}



//������ 5. ������ ����������� �����. ����������.
vector<Complex> complex_random_vector(int size)
{
    vector<Complex> v;
    Complex b; //�������������� ����������� �����.
    v.reserve(size); // ����������� ����� ��� size ���������

    for (int i = 0; i < size; ++i)
    {
        v.push_back(b.random()); // ��������� � ������ ��������� ����� ������� ����� �������� ���������� �����.
    }
    return v;
}

/* Task 7.
Complex max_in_vector_complex(vector<Complex> v)
{
    //���������� �� ���������, �.�. ��� ��������� ��������� ��� Rational
    int number_of_max=1;
    Rational tmax, helpt;
    tmax=v[1].abs();
    for (int i = 0; i < v.size(); i++)
    {
        helpt=v[i].abs(); //������ � ����� Rational ��� �� �� ��������.
        if (helpt>tmax) number_of_max=i;
    } //���� �������� ��������� ������ �� ����.
    return v[number_of_max];
} */ //���� �� �� ����, ��� ������ ��� �� ����������.
//����� ����: ���� ���� ����� � ������� �������, ���������� ��� �����.
//����� ����������� �� ������� �� ������.

//������� 8. ���������� "+" ��� ����������� �����.
Complex operator+(Complex const & rhs, Complex const & lhs)
{
    Complex result(rhs); //�������� ������ �����
    result += lhs; //���������� ������������ � complex.h ���������� += ��� ����������� �����

    return result; //��������� �������. ������ ��������. xD
}

//������� 8. �������� �������� ����������� �����.
vector<Complex> sum_complex_vec(vector<Complex> v1, vector<Complex> v2)
{
    vector<Complex> resv; //�������������� ������.
    int length; //�����(����� ���������� ���� ����� �����������)

    if (v1.size()<v2.size()) length=v1.size(); // ������� ����� �����������
    else
        length=v2.size();

    resv.reserve(length); //�������� ������ ��� �������������� ������.
    for (int i = 0; i<length; i++)
    {
        resv.push_back(v1[i]+v2[i]); //��������� ���
    }
    return resv; //���������� ��� ��������� ������.
}


