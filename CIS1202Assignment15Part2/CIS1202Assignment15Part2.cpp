/*
Kacey Hall
CIS 1202
5/2/2022
*/

#include <iostream>
#include <cmath>

using namespace std;

template<class N>
N Half(N x)
{
    return x / 2;
}

int Half(int x)
{
    double y = x;

    return round(y / 2);
}

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << Half(a) << endl;
    cout << Half(b) << endl;
    cout << Half(c) << endl;
}