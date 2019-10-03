#include <iostream>
#include "Rational.h"
//������� �����, 2 ����, 2 ������, ���.
// ����� �� ������ ������� std:: �����:
using std::cout;
using std::endl;

int main()
{
    cout << "Hello, Rationals!" << endl;

    // ������ 1
    Rational a;

    // ������ � ����� a ������ (������ ����������� ����������������� �
    // ��������� ����� ������):
    // cout << a.num;

    // ������ 2 � 3:
    cout << a <<endl; // ����� ������� ������ 2 ����������� �����, � ����� ������ 3 - 0
                //endl ������� ��� ����������� ������(������� ������)
    // ������ 3:
     Rational b(1, 2);
     cout << b << endl;

    // ������ 4:
     cout << Rational(1, 2) * Rational(2, 1) << endl; // => 1

    // ������ 5: ��������� inv � / ��������������
    Rational c(2,3); //������� ������� ��� �������� "��������"
    c.inv(); //�������� �����
    cout << c << endl; //������� �� ������

    cout << Rational(1,2) / Rational(2,1) << endl; //�������� ��������� "/" �����: 1|4

    // ������ 6:
    // ������ ������ ������� �����:
    int arr[] = {1, 2, 3};
    int arr_len = sizeof(arr) / sizeof(*arr);
    // ��������:
    print_array(arr, arr_len);

    // ������ ������:
    Rational a_rat[] = { Rational(1,4), Rational(2,3), Rational(2,5)};

    int length_a_rat = sizeof(a_rat) / sizeof(*a_rat);
    print_array(a_rat, length_a_rat);
    /* ����������� ����� a_rat � ������ a_rat ���������� ��� ��,
       ��� ��� ������� arr ���� */

    cout <<"Result Multiply "<< mul(a_rat,length_a_rat) << endl;



    //�������� ������ ����� ���� ������!!!
    //������� 2. ����������� � 1 �����(���������). (HW)
    cout << endl << "NOW HOMEWORK!!!" << endl << endl;
    Rational hw1(4);
    cout << hw1 << endl; //�� ������ �������� 4.

    //������� 3. �������� �������������� ������. (HW)
    //cout << gcd(4,2); �������� gcd
    //normalize ����������-��������.

}
