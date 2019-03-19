#ifndef TRIANGLETYPELIB_H
#define TRIANGLETYPELIB_H


enum geometryTriangleType {None,
                           Equilateral_triangle, //has three equal sides
                           Isosceles_triangle,   //has two equal sides
                           Scalene_triangle,     //has no equal sides
                           Acute_triangle,       //has three angles < 90
                           Right_triangles,      //has one angle = 90
                           Obtuse_triangle};     //has one angle > 90

geometryTriangleType* triangleType(double, double, double);
                 bool isRealTriangle(double, double, double);
                 bool isEqual(double, double);



#endif // TRIANGLETYPELIB_H
