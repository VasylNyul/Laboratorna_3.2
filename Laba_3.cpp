// Lab_03_2.cpp
// Нюл Василь
// Лабораторна робота No 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 7

#include <iostream>

using namespace std;
 int main()
{
        double x; // вхідний аргумент
        double a; // вхідний параметр
        double b; // вхідний параметр
        double c; // вхідний параметр
        double F = 0.0; // результат обчислення виразу

        cout<<"a=";cin >>a;
        cout<<"b=";cin >>b;
        cout<<"c=";cin >>c;
        cout<<"x=";cin >>x;
           
            if(x<5 && c!=0)
               F = -a*x*x-b;
            if(x>5 && c==0)
               F = (x-a)/x;
            if(!(x<5 && c!=0) && !(x>5 && c==0))
               F = -x/c;
    cout << endl;
    cout << "1) F = " << F << endl;
    return 0;
 }
