#ifndef POINTS_H
#define POINTS_H
//Каримов Данил, 2 курс, 2 группа, ПМИ.
//Задание 4.

#include <iostream>
#include <math.h>

using std::ostream;
using std::endl;

class Point
{
    //Задача 1. Объявление полей класса.
    float coord_x;
    float coord_y;

    friend ostream & operator<<(ostream &, Point const &);
public:
    //Задание 1 Создать конструкторы.
    Point() : coord_x(0.0), coord_y(0.0) {} //в точке (0, 0)
    Point(float x, float y) : coord_x(x), coord_y(y) {} //в точке с координатами (х, у).
    //Задание 3. Вычисление расстояния до начала координат.
    float distance_to_origin()
    {
          return sqrt(coord_x*coord_x+coord_y*coord_y);
    }

};

//Задание 4. Расстояние до массива точек.
/*
vector<int> distance_array_to_origin(Point * arrp[])
{
    vector<int> resarr[];
    for (int i=0; i!=*Point, i++)
    {

    }
} */

#endif // POINTS_H
