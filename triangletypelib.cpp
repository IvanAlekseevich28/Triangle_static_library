#include "triangletypelib.h"
#include <cmath>
#include<limits>
#include <iostream>

geometryTriangleType* triangleType(double a, double b, double c)
{
    //Sorting
    if (a > b) std::swap(a,b);
    if (b > c) std::swap(b,c);
    //Сheck for existence
    if (!isRealTriangle(a,b,c)) return new geometryTriangleType(None);

    auto answer = new geometryTriangleType[3];
    answer[2] = None;

    //By side
      if (!isEqual(a,b) && !isEqual(a,c)) answer[0] = Scalene_triangle;
      else if (/*isEqual(a,b) && */!isEqual(a,c)) answer[0] = Isosceles_triangle;
      else answer[0] = Equilateral_triangle;

      double C = sqrt(c*c);
      double A_B = sqrt(a*a + b*b);
      //By Angle
      if (c < A_B) answer[1] = Acute_triangle;
      else if (C > A_B) answer[1] = Obtuse_triangle;
      else answer[1] = Right_triangles;

      return answer;
}

bool isEqual(double x, double y) {
    return std::fabs(x - y) < std::numeric_limits<double>::epsilon();
}

bool isRealTriangle(double a, double b, double c)
{
    if (a <= 0 || b <= 0 || c <= 0) return false;
    if (c < a + b && c > 0 && a > 0 && b > 0) return true;
    return false;
}
