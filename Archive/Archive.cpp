#include "Archive.h"
//������� �����, 2 ����, 2 ������ , ���.
#include <iostream>

using namespace std;
//������� 5. ���������� ������ � ����� � ����������.
istream & operator>>(istream & is, Archive & AR)
{
    is >> AR.Archive_id; //����� ������ ������ � ����������.
    Citizen TCp("NAME", MALE, 18); //������� "����������" ����������
    is >> TCp; //���������� ��� ��������� >> ��� Citizen
    AR.insert_to_archive(TCp); //� ��������� � �����.

    assert(is); //��������� ����������� ������.
    return is;
}

