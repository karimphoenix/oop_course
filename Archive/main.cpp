#include <iostream>
//������� �����, 2 ����, 2 ������ , ���.
#include "Archive.h"


using namespace std;

int main()
{
    //������� 3.
    int Number=1; //����� ������

    Citizen Cp1("Vasya", MALE, 18); //��������� �����������, ������� �������
    Citizen Cp2("Tanya", FEMALE, 18); //� �����.

    Archive LCp(Number); //������� ����� � ������� Nymber (1)

    LCp.insert_to_archive(Cp1); //��������� � ����� �������� ����� ���� �������
    LCp.insert_to_archive(Cp2);

    LCp.print_Archive(); //�������� ����� �� �������.

    LCp.print_Archive_in_file(); //������ ����� � �-�.

    //������� 4. ���������� �����.
    LCp.sortByName(); //��������� �����.
    cout << "Sort Archive:" << endl << endl;
    LCp.print_Archive(); //�������� ���������������.

    //������� 5. �����������.
}
