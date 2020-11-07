// Laba_2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*Не використовуючи тривимірну графіку, змоделювати поворот тетраедра в ортогональній системі координат.*/
#include <iostream>
#include "Laba_2.2.h"
using namespace std;
#define _USE_MATH_DEFINES
constexpr auto PI = 3.14;

void NewFunctionX(long double& x_, int x, long double& y_, int y, long double m, int z, long double& z_)
{
    x_ = x;
    y_ = y * m + z * m;
    z_ = -y * m + z * m;
}

void NewFunctionZ(long double& x_, int x, long double m, int y, long double& y_, long double& z_, int z)
{

    x_ = x * m - y * m;
    y_ = x * m + y * m;
    z_ = z;
}
void NewFunctionY(long double& x_, int x, long double m, int z, long double& y_, int y, long double& z_)
{
    x_ = x * m + z * m;
    y_ = y;
    z_ = -x * m + z * m;
}

int main()
{
    int x, y, z, n = 4;
    int i = 0;

    long double c, m;
    cout << "angle:";
    cin >> c; '\n';
    m = cos(c * PI / 180);
    cout << "angle=" << m << endl;;
    long double x_, y_, z_;
    for (; i < n; i++)
    {
        cout << "x=";
        cin >> x;
        cout << "y=";
        cin >> y;
        cout << "z=";
        cin >> z;
        int choice;
        cout << "Choise   1-x  2-y  3-z:";
        cin >> choice; '\n';
        switch (choice)
        {
        case 1:  NewFunctionX(x_, x, y_, y, m, z, z_); break;

        case 2: NewFunctionY(x_, x, m, z, y_, y, z_); break;

        case 3:NewFunctionZ(x_, x, m, y, y_, z_, z); break;
        }
    

        cout << "new coordinate:[" << x_ << ";" << y_ << ";" << z_ << "]" << endl;
    }

    return 0;
}

