#include "point.h"

ostream & operator<<(ostream & os, Point const & p)
{
    //������� 2. ����� � �����.
    os << p.coord_x << endl;
    os << p.coord_y;

    return os;
}


