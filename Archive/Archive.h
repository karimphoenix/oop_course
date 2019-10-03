#ifndef ARCHIVE_H
#define ARCHIVE_H
//������� �����, 2 ����, 2 ������ , ���.
#include <list>
#include <iostream>
#include <fstream>

#include "citizen.h"

using namespace std;
// ������� 2. ������� ����� Archive.
class Archive
{
    list<Citizen> Citizens; //����/������ �������
    int Archive_id; //����� ������.

    //������� 5. ������ � ����� � ����������.
    friend istream & operator>>(istream & , Archive &);

public:

    Archive (int ID): Archive_id(ID) {} //����������� ������ � ������� ID

    void insert_to_archive(Citizen const & LC) //������� � ������ �������
    {
        Citizens.push_back(LC); //���. push_back �� ������ list
    }
    //������� 3. ������.
    void print_Archive () //�-��� ���� ������ ���������� ���� �����.
    {
        cout << "Archive Id: " << Archive_id << endl; //�������� ����� ������
        typedef list<Citizen>::const_iterator It; // ��� ��������� --
                                            // ����������� ���������

        for (It it = Citizens.begin(); it != Citizens.end(); ++it) //�������� ������.
            cout << *it << endl; //�� ������ �� ������ ������, ���������� ������� ������.
    }
    //������� 3. ������ � �-�.
    void print_Archive_in_file()
    {
        ofstream fout("archive.txt"); //��������� fout � archive.txt
        fout << "Archive Id:" << Archive_id << endl; //�������� ���� ������ � ������� ������.

        typedef list<Citizen>::const_iterator It;

        for (It it = Citizens.begin(); it != Citizens.end(); ++it) //�������� ������ � �-�.
            fout << *it << endl;
    }

    //������� 4. ���������� ������.
    void sortByName()
    {
        Citizens.sort(cmpNames); //��������� ���������� ���������� ��������� �����
            //�� ������ �������.
    }
};

//������� �����, 2 ����, 2 ������ , ���.

#endif ARCHIVE_H // ARCHIVE_H
