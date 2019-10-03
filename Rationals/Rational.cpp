#include "Rational.h"
//������� �����, 2 ����, 2 ������, ���.
// ������ 2. �������� ������ � �����: ����������.
ostream & operator<<(ostream & os, Rational const & r) {
    os<<r.num;
    if (r.num != 0 && r.den != 1) /*��������, ��� ����������� ����� �� 0
        � ��������� �� 1, ����� �������� "|" (������������� �����) */
    os<<"|" << r.den;
    // �������� ����� ����� ������� r � os � ������� <<

    // ����������:
    return os; // � ����� operator<< ������ ������������ ������ ��������
}


// ������ 4. �������� ��������� ������: ����������.
Rational operator*(Rational const & lhs, Rational const & rhs) {
    Rational res(lhs); // ������ ����� ������ ���������

    res*=rhs;
    // ���������� ����������� ���� ����� *=

    return res; // ���������� ���������
}
//������ 5. �������� ������� ������. ����������.
Rational operator/(Rational const & lhs, Rational const & rhs)
{
    Rational helpt(lhs); //��������������� �������(����� ����� ����� ���������)

    helpt/=rhs; //�������� ������������� ���� /=


    return helpt;
}
//������ 6. �������� ������������ ������� ������. ����������.
Rational mul(Rational * arr, int n)
{
    Rational sum(1,1);
    for (int i = 0; i<n; i++)
        sum=sum*arr[i];
    return sum;
}


//�������� ������ ����� ���� ������.
//������� 3. �������� �������������� ������. (HW)
int gcd(int n, int m) //���������� ���.
{
    if (m==0) return n; //�������� ������ � �������.
    else
        if (n<m)
            return gcd(m,n);
        else
            return gcd(m, n% m);
}
