#include "test_triangle.h"
#include <iostream>
#include <cmath>
#include<limits>

//template<class T>
Test_triangle::Test_triangle(const double &a0, const double &b0, const double &c0)
{
    this->a = a0;
    this->b = b0;
    this->c = c0;

    if (a > c)
    {
        double temp = a;
        a = c;
        c = temp;
    }
    else if (b > c)
    {
        double temp = b;
        b = c;
        c = temp;
    }
    if(!isRealTriangle())
        std::cout << "triangle created with the wrong side!\n";
}

bool Test_triangle::isRealTriangle()
{
    if (c < a + b && c > 0 && a > 0 && b > 0) return true;
    return false;
}

bool Test_triangle::is_equal(double x, double y) {
    return std::fabs(x - y) < std::numeric_limits<double>::epsilon();
}


Tr::type* Test_triangle::isType()
{

  if (!isRealTriangle())
  {
      answer = new Tr::type;
      return &(answer[0] = Tr::None);
  }

  answer = new Tr::type[3];
  answer[2] = Tr::None;

  auto C = sqrt(c*c);
  auto A_B = sqrt(a*a + b*b);

  //By side
  if (!is_equal(a,b) && !is_equal(a,c)) answer[0] = Tr::Scalene_Triangle;
  else if (is_equal(a,b)) answer[0] = Tr::Isosceles_triangle;
  else answer[0] = Tr::Equilateral_triangle;

  //By Angle
  if (c < A_B) answer[1] = Tr::Acute_Triangle;
  else if (C > A_B) answer[1] = Tr::Obtuse_Triangle;
  else answer[1] = Tr::Right_Triangles;

  return answer;
}
