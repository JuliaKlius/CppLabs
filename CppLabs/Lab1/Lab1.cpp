#include <iostream>
#include <math.h>

// functions declaration
double ctg(double x);
double CalculateFormule(double x);
double DistanceBetweenPoints(double point1[2], double point2[2]);
double CalculateH(double A[2], double B[2], double C[2]);
double CalculateBisector(double A[2], double B[2], double C[2]);

double CalculateFormule(double x)
{
    double result = cos(2 * fabs(x)) + ((1.1 * x + 2) * ctg(3 * x)) / (1.7 * (2.3 * x - 5));
    return result;
}

double ctg(double x)
{
    return cos(x) / sin(x);
}

double DistanceBetweenPoints(double point1[2], double point2[2])
{
    return sqrt(pow((point2[0] - point1[0]), 2) + pow((point2[1] - point1[1]), 2));
}

double CalculateH(double A[2], double B[2], double C[2])
{
    double HeightB;
    double AB = DistanceBetweenPoints(A, B);
    double BC = DistanceBetweenPoints(B, C);
    double AC = DistanceBetweenPoints(A, C);
    double halfPerimeter = (AB + AC + BC) / 2;
    HeightB = 2 / AB * sqrt(halfPerimeter * (halfPerimeter - AB) * (halfPerimeter - BC) * (halfPerimeter - AC));
    return HeightB;
}

double CalculateBisector(double A[2], double B[2], double C[2])
{
    double bisectorC;
    double AB = DistanceBetweenPoints(A, B);
    double BC = DistanceBetweenPoints(B, C);
    double AC = DistanceBetweenPoints(A, C);
    bisectorC = sqrt(AB * BC * (AB + BC + AC) * (AB + BC - AC)) / (AB + BC);

    return bisectorC;
}

int main()
{
    double x = 10;
    double result = CalculateFormule(x);
    std::cout << "\nCurent input = " << x;
    std::cout << "\nFormula result: " << result;

    double x1 = 100;
    double result1 = CalculateFormule(x1);
    std::cout << "\nCurent input = " << x1;
    std::cout << "\nFormula result: " << result1;

    double x2 = 105;
    double result2 = CalculateFormule(x2);
    std::cout << "\nCurent input = " << x2;
    std::cout << "\nFormula result: " << result2;

    double x3 = 109;
    double result3 = CalculateFormule(x3);
    std::cout << "\nCurent input = " << x3;
    std::cout << "\nFormula result: " << result3;

    double x4 = 0;
    double result4 = CalculateFormule(x4);
    std::cout << "\nCurent input = " << x4;
    std::cout << "\nFormula result: " << result4;
    std::cout << "\nWhen X = 0 ctg will not exist";

    double x5 = 2.17;
    double result5 = CalculateFormule(x5);
    std::cout << "\nCurent input = " << x5;
    std::cout << "\nFormula result: " << result5;
    std::cout << "\nWhen X = 2.17 will be division by 0";
    
    const int variant = 11;
    double pointA[2] = { 0.0, 0.0 };
    double pointB[2] = { variant, variant - 1 };
    double pointC[2] = { 0 - variant, variant + 1 };

    double resultH = CalculateH(pointA, pointB, pointC);
    double resultB = CalculateBisector(pointA, pointB, pointC);
    std::cout << "\nCalculating triangular height B:" << resultH;
    std::cout << "\nCalculating triangular bisector C:" << resultB;

    return 0;
}
