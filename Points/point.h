#ifndef POINTS_H
#define POINTS_H
//������� �����, 2 ����, 2 ������, ���.
//������� 4.

#include <iostream>
#include <math.h>

using std::ostream;
using std::endl;

class Point
{
    //������ 1. ���������� ����� ������.
    float coord_x;
    float coord_y;

    friend ostream & operator<<(ostream &, Point const &);
public:
    //������� 1 ������� ������������.
    Point() : coord_x(0.0), coord_y(0.0) {} //� ����� (0, 0)
    Point(float x, float y) : coord_x(x), coord_y(y) {} //� ����� � ������������ (�, �).
    //������� 3. ���������� ���������� �� ������ ���������.
    float distance_to_origin()
    {
          return sqrt(coord_x*coord_x+coord_y*coord_y);
    }

};

//������� 4. ���������� �� ������� �����.
/*
vector<int> distance_array_to_origin(Point * arrp[])
{
    vector<int> resarr[];
    for (int i=0; i!=*Point, i++)
    {

    }
} */

#endif // POINTS_H
