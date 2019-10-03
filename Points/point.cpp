#include "point.h"

ostream & operator<<(ostream & os, Point const & p)
{
    //Задание 2. Вывод в поток.
    os << p.coord_x << endl;
    os << p.coord_y;

    return os;
}


