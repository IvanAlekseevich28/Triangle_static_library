#include "triangletypelib.h"
//#include <gtest/src/gtest-internal-inl.h>
#include <gtest/gtest.h>
#include <string>
#include <math.h>


TEST (test001, test)
{
    //Input
    double a = 1.0;
    double b = 1.0;
    double c = sqrt(2.0);

    //Actual
    auto answer1_1 = triangleType(a,b,c);

    //Expectations
    geometryTriangleType expected[] = {geometryTriangleType::Isosceles_triangle,
                                     geometryTriangleType::Right_triangles,
                                     geometryTriangleType::None};

    EXPECT_TRUE(0 == memcmp(answer1_1, expected, sizeof (expected)));
}

TEST (test002, test)
{
    //Input
    double a = 1.0;
    double b = 1.0;
    double c = sqrt(2.0);

    //Actual
    auto answer1_2 = triangleType(a,c,b);

    //Expectations
    geometryTriangleType expected[] = {geometryTriangleType::Isosceles_triangle,
                                     geometryTriangleType::Right_triangles,
                                     geometryTriangleType::None};

    EXPECT_TRUE(0 == memcmp(answer1_2, expected, sizeof (expected)));
}

TEST (test003, test)
{
    //Input
    double a = 5.0;
    double b = 4.0;
    double c = 3.0;

    //Actual
    auto answer2_1 = triangleType(a,b,c);


    //Expectations
    geometryTriangleType expected[] = {geometryTriangleType::Scalene_triangle,
                                     geometryTriangleType::Right_triangles,
                                     geometryTriangleType::None};

    EXPECT_TRUE(0 == memcmp(answer2_1, expected, sizeof (expected)));
}

TEST (test004, test)
{
    //Input
    double a = 12.0;
    double b = 14.4;
    double c = 26.0;

    //Actual
    auto answer3_1 = triangleType(a,b,c);


    //Expectations
    geometryTriangleType expected[] = {geometryTriangleType::Scalene_triangle,
                                     geometryTriangleType::Obtuse_triangle,
                                     geometryTriangleType::None};

    EXPECT_TRUE(0 == memcmp(answer3_1, expected, sizeof (expected)));
}

TEST (test005, test)
{
    //Input
    double a = 5.0;
    double b = 4.2;
    double c = 3.0;

    //Actual
    auto answer4_1 = triangleType(a,b,c);


    //Expectations
    geometryTriangleType expected[] = {geometryTriangleType::Scalene_triangle,
                                     geometryTriangleType::Acute_triangle,
                                     geometryTriangleType::None};

    EXPECT_TRUE(0 == memcmp(answer4_1, expected, sizeof (expected)));
}

TEST (test006, test)
{
    //Input
    double a = sqrt(7.0);
    double b = sqrt(7.0);
    double c = sqrt(7.0);

    //Actual
    auto answer5_1 = triangleType(a,b,c);


    //Expectations
    geometryTriangleType expected[] = {geometryTriangleType::Equilateral_triangle,
                                     geometryTriangleType::Acute_triangle,
                                     geometryTriangleType::None};

    EXPECT_TRUE(0 == memcmp(answer5_1, expected, sizeof (expected)));
}

TEST (test007, test)
{
    //Input
    double a = 7.0;
    double b = 7.0;
    double c = 7.0;

    //Actual
    auto answer5_2 = triangleType(a,b,c);


    //Expectations
    geometryTriangleType expected[] = {geometryTriangleType::Equilateral_triangle,
                                     geometryTriangleType::Acute_triangle,
                                     geometryTriangleType::None};

    EXPECT_TRUE(0 == memcmp(answer5_2, expected, sizeof (expected)));
}

TEST (test008, test)
{
    //Input
    double a = -3;
    double b = sqrt(7.0);
    double c = sqrt(7.0);

    //Actual
    auto answer5_1 = triangleType(a,b,c);


    //Expectations
    geometryTriangleType expected[] = {geometryTriangleType::None};

    EXPECT_TRUE(0 == memcmp(answer5_1, expected, sizeof (expected)));
}

TEST (test009, test)
{
    //Input
    double a = -1;
    double b = 6;
    double c = 4;

    //Actual
    auto answer5_2 = triangleType(a,b,c);


    //Expectations
    geometryTriangleType expected[] = {geometryTriangleType::None};

    EXPECT_TRUE(0 == memcmp(answer5_2, expected, sizeof (expected)));
}

TEST (test010, test)
{
    //Input
    double a = 45;
    double b = 6;
    double c = 4;

    //Actual
    auto answer6_1 = triangleType(a,b,c);


    //Expectations
    geometryTriangleType expected[] = {geometryTriangleType::None};

    EXPECT_TRUE(0 == memcmp(answer6_1, expected, sizeof (expected)));
}


int main(int argc, char *argv[])
{
    ::testing::InitGoogleTest( &argc,  argv);
    return RUN_ALL_TESTS();
}

