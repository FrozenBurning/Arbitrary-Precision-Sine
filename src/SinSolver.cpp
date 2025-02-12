#include "SinSolver.h"

SinSolver::SinSolver(double x)
{
    _flag = 1.0;
    if (x < 0)
    {
        x = -x;
        _flag *= -1;
    }

    while (x > 2 * M_PI)
    {
        x -= 2 * M_PI;
    }
    if (x >= M_PI)
    {
        x = x - M_PI;
        _flag *= -1;
    }
    if (x > M_PI_2)
    {
        x = M_PI - x;
    }

    _x = x;
    //params calc
    _n = 1;
    while (_x / _n > 1e-6)
    {
        _n++;
    }

    _h = (_x - 0.0) / _n;
}

SinSolver::~SinSolver()
{
}

double SinSolver::taylor_series_method()
{
    int i = 1, negation = 1; 
    double sum;
    double index = _x;          
    double Factorial = 1;        //阶乘
    double TaylorExpansion = _x;
    do
    {
        Factorial = Factorial * (i + 1) * (i + 2);
        index *= _x * _x;
        negation = -negation;//考虑每项前的-1因子
        sum = index / Factorial * negation;
        TaylorExpansion += sum;
        i += 2;
    } while (abs(sum) > 1e-6);
    return (TaylorExpansion * _flag);
}

double SinSolver::differential_equation_method()
{
    // //params calc
    // _n = 1;
    // while (_x / _n > 1e-6)
    // {
    //     _n++;
    // }

    // _h = (_x - 0.0) / _n;

    //calc sinx
    double cosn = 1.0;
    double sinn = 0.0;
    double cosp, cosq, sinp, sinq, next_cos, next_sin;
    for (int i = 0; i <= _n; i++)
    {
        cosp = cosn - _h * sinn;
        sinp = sinn + _h * cosn;
        cosq = cosn - _h * sinp;
        sinq = sinn + _h * cosp;
        next_cos = (cosp + cosq) / 2;
        next_sin = (sinp + sinq) / 2;
        //move
        cosn = next_cos;
        sinn = next_sin;
    }
    return sinn * _flag;
}

double SinSolver::fourier_method()
{
    double dsin = _h - _h * _h * _h / 6;
    double dcos = 1 - 2 * (_h / 2 - _h / 2 * _h / 2 * _h / 2 / 6) * (_h / 2 - _h / 2 * _h / 2 * _h / 2 / 6);
    double cosn = 1.0;
    double sinn = 0.0;
    double next_sin, next_cos;
    for (int i = 0; i <= _n; i++)
    {
        next_sin = cosn * dsin + sinn * dcos;
        next_cos = cosn * dcos - sinn * dsin;
        //move
        cosn = next_cos;
        sinn = next_sin;
    }
    return sinn * _flag;
}

double SinSolver::solver_handler(int method)
{
    switch (method)
    {
    case Taylor_Series:
        return taylor_series_method();
    case Differential_Equation:
        return differential_equation_method();
    case Fourier:
        return fourier_method();
    default:
        return 0;
    }
}