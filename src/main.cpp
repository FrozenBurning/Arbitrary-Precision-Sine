#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

double mysin(double num2)
{
    int i=1,negation=1;//取反
    double sum;
    double index=num2;//指数
    double Factorial=1;//阶乘
    double TaylorExpansion=num2;//泰勒展开式求和
     do
     {
         Factorial=Factorial*(i+1)*(i+2);//求阶乘
         index*=num2*num2;//求num2的次方
         negation=-negation;//每次循环取反
         sum=index/Factorial*negation;
         TaylorExpansion+=sum;
         i+=2;
         std::cout<<"order: "<<i<<std::endl;
     }while(abs(sum)>1e-6);
     return(TaylorExpansion);
}






int main (int argc, char *argv[])
{
    std::cout<<std::setprecision(12);
    std::cout<<"mysin= "<<mysin(0.5)<<std::endl;
    std::cout<<"stdsin= "<<sin(0.5)<<std::endl;
    return 0;
}


