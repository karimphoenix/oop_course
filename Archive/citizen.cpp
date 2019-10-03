#include "citizen.h"
#include <istream>
//������� �����, 2 ����, 2 ������ , ���.
using namespace std;
//������� 3. ������ ������.
ostream & operator<<(ostream & os, Citizen const & CP) //����������� �������� << ��� Citizen
{
    os << "Name: " << CP.name <<endl;  //������� ������-���
    os << "Sex: " << CP.gender <<endl; //���
    os << "Age: " << CP.age <<endl; //�������

    return os;
}

//������� 4. ���������� ������.
bool cmpNames (Citizen const & ct1, Citizen const & ct2)
{
    string s1=ct1.getName(); //�������� ��� ������ �� �����������
    string s2=ct2.getName(); //� ������� ����
    if (s1<s2) return 1; //��������� ��
    else return 0; //���� �� ������ �������-����� 0
}

istream & operator>>(istream & is, Gender & SEX) //����������� >> ��� ���� Gender
{
    is >> SEX;
    assert(is);
    return is;
}

istream & operator>>(istream & is, Citizen & CP) //���������� >> ��� Citizen� ����� ������������ � �����
{
    is >> CP.name; //���� �����
    is >> CP.gender; //���� ����
    is >> CP.age; //���� ��������

    assert(is); //��������� ��� ����� ���.
    return is;
}

