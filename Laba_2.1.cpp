// Laba_2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*	Задається число a, крок по куту B та число n. Відобразити перші n точок кривої r(θ)=2a(1+cos⁡(iθ) ), i∈{0,N} (формула дана
в полярних координатах).*/

#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
constexpr auto PI = 3.14;
using namespace std;

int main()
{
    long double a, N, n;
    long double c;
    cout << "number a:";
    cin >> a; '\n';
    cout << "number N:";
    cin >> N; '\n';
    cout << "angle B :";
    cin >> c; '\n';
    cout << "number n<N:";
    cin >> n; '\n';
    for (int i = 0; (0 <= i) && (i <= N); i++)
    {
        long double r;
        long double m;
        m = cos(i * c * PI / 180);
        r = static_cast<unsigned __int64> (2 * a * (1 + m));
        long double x, y;
        x = r * cos(m);
        y = r* sin(m);
        if ((n >= cos(m)) && (n >= sin(m)) && (sin(m) >= 0) && (cos(m) >= 0))
        {
            cout << "x:" << x << endl;
            cout << "y:" << y << endl;
        }
    }
    return 0;
}