#pragma once
#include <math.h>
#include <iostream>

#define Taylor_Series 0
#define Differential_Equation 1

class SinSolver
{
private:
    double _x;
    double _h;
    int _n;
    int _flag;

    double taylor_series_method();
    double differential_equation_method();
public:
    SinSolver(double x);
    ~SinSolver();

    double solver_handler(int method);
};
