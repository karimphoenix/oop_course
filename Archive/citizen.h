#ifndef CITIZEN_H
#define CITIZEN_H
//������� �����, 2 ����, 2 ������ , ���.
#include <string>
#include <cassert>
#include <iostream>

using namespace std;

//������� 1. ������� ����� Citizen
enum Gender {MALE, FEMALE};

class Citizen
{
    string name; //��� ����������
    Gender gender; //��� ���
    int age; //� �������

    friend ostream & operator<<(ostream &, Citizen const &); //����������� �������� << ��� ����������� ������
    friend bool cmpNames(Citizen const &, Citizen const &); //"�������������" �-��� ��������� ���� �������.
    friend istream & operator>>(istream &, Citizen &); //������ ���������� � ����������.

public:

    Citizen(string NAME, Gender SEX, int HOW_OLD):name(NAME),  gender(SEX), age(HOW_OLD)
                                                {assert(SEX>-1); assert(SEX<2);} //����������� ������

    //������� 4. ���������� ������.
    string getName() const {return name;}

};


#endif // CITIZEN_H
