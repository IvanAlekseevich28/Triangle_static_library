#ifndef TEST_TRIANGLE_H
#define TEST_TRIANGLE_H


namespace Tr {
enum type {None,
            Equilateral_triangle, Isosceles_triangle, Scalene_Triangle,
            Acute_Triangle, Right_Triangles, Obtuse_Triangle};
}

class Test_triangle
{
    double a;
    double b;
    double c;
    Tr::type *answer;
    bool isRealTriangle();
    bool is_equal(double x, double y);

public:

    Test_triangle(const double &a0, const double &b0, const double &c0);

    Tr::type* isType();

    ~Test_triangle() {delete [] answer;}

};

#endif // TEST_TRIANGLE_H
