#ifndef RATIONAL_H
#define RATIONAL_H
//������� �����, 2 ����, 2 ������, ���.
#include <iostream>
#include <cassert>

using std::ostream;

// ������������ �����
class Rational {
    /* ������ 1. ���������� ������.                                           */
    int num;/*  �������� ���� ��� ��������� (numerator) */
    int den;/* � ����������� (denominator)                                      */

    /* ������ 2. ����� � ����� �������� ������ -- ���
                 ������ �� �������.                                           */
    // ��������� � ������:
    friend ostream & operator<<(ostream &, Rational const &);
    // !!!�������� ���������� ���������� �����!!!. //-��������� � ��, ��� ��� ����� ������.

    //������ ���� ���������� �����!!!!
    //�������� ������!!!.
    //������� 3. ���������� �����.
    friend int gcd(int n, int m);
    void normalize() { //���-��� ������������ �����
        int tgcd=gcd(abs(num), den);
        num=num/tgcd;
        den=den/tgcd;
        }

// ���������� ������ ������������� (public) ������ ������
public:

    /* ������ 3. ������������ ������.                                         */
    /* ����������� #1 -- ��� ����������, ������ ����� = 0                    */
    /* ����������������� ������ ������������� ����� (����� ������� ')') */
    Rational( /* ������ ������ ���������� */ ): num(0), den(1)
    {
        /*������ ����*/
    }


    /*       ����������� #2, ���������������� ����
             ������ ���������� ���� ����� ���������� �
             ������� ������ �������������                   */

    Rational(int n,int d):num(n),den(d){ assert(den>0); } //assert(den>0) ���������, ��� den>0.
                                                        //�����, ������ ������ � ��������� ���������.

    /* ������ 4. ��������� ������. */
    Rational & operator*=(Rational const & other)
    {
        //   �������� �������� ����� num/den �������� �������
        //     �� �������� ����� num/den ������� other
         num *= other.num;
         den *= other.den;

         normalize();

        // ����������:
        return *this; // ���������� ���� (this ��� ��������� �� ������� ������)
    }

    /* ������ 5. �������������� �����: a/b -> b/a.                            */
    Rational & inv()
    {
       assert(num!=0); //�������� ��� ����������� �� ����� ����� 0
       int helpt; //��������������� ���������� ��� �����
       helpt=num;  //���������� ����� ��������
       num=den;
       den=helpt;
    return *this;

    }

    Rational & operator/=(Rational const & other)
    {
        //   �������� �������� ����� num/den �������� �������
        //     �� �������� ����� num/den ������� other
        Rational copyt(other); //�������� ������ ����� ���������
        copyt.inv(); //����������� �
        num *= copyt.num; //���������� *=
        den *= copyt.den;
        normalize();

        return *this;  // ���������� ���� (this ��� ��������� �� ������� ������)
    }

    //�������� ������ ����� ���� ������.
    //������� 2. ����������� � 1 ����������. (HW)
    Rational(int N): num(N), den(1) {}


};

// ������ 4. �������� ��������� ������: ���������.
Rational operator*(Rational const & lhs, Rational const & rhs);

//������ 5. �������� ������� ������. ���������.
Rational operator/(Rational const & lhs, Rational const & rhs);

// ������ 6. �������

// ������ ������� ���� T, T -- ��������-���
template <typename T>
void print_array(T * arr, int n) {
    using std::cout;
    using std::endl;
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

// ������������ ���� ������ � ������ �������
Rational mul(Rational * arr, int n);


// RATIONAL_H:
#endif
