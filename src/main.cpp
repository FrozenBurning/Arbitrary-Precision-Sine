#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
#include "SinSolver.h"

int main(int argc, char *argv[])
{
    double x;
    int method;
    std::string tmp;
    std::cout << std::setiosflags(std::ios::fixed)<<std::setprecision(4);
    std::cout << "$$$$$$$$Welcome to use My Sine Calculator$$$$$$$$" <<std::endl;
    while (1)
    {
        std::cout<<"Enter [q] to quit, Press Any key to continue......"<<std::endl;
        std::cin >> tmp;
        if (tmp == "q")
        {
            break;
        }
        else
        {
            std::cout << "-------Please input x-------" << std::endl;
            std::cout << "x = ";
            std::cin >> x;
            std::cout << "-------Please Choose Method-------" << std::endl;
            std::cout << "[0]Taylor Series" << std::endl;
            std::cout << "[1]Differential Equation" << std::endl;
            std::cout << "[2]Delta accumulator" << std::endl;
            std::cout << "Your Choice: ";
            std::cin >> method;
            std::cout << "*************Solving**************" << std::endl;
            std::cout << "*************Solving**************" << std::endl;
            std::cout << "*************Solving**************" << std::endl;
            SinSolver mysin(x);
            std::cout << "_______________________" << std::endl;
            std::cout << "|  My Sine   "
                      << "|" << mysin.solver_handler(method) << "|"<<std::endl;
            std::cout << "_______________________" << std::endl;
            std::cout << "|C++ Lib Sine"
                      << "|" << sin(x) << "|"<<std::endl;
            std::cout << "_______________________" << std::endl;
            std::cout<<std::endl<<std::endl<<std::endl;
        }
    }
    return 0;
}
