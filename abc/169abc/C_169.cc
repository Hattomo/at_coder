#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

#define PI 3.14159265358979323846264338327950L

long long int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long double A;
    long double B;
    //double floor(double);
    cin >> A;
    cin >> B;
    res = A * B;
    res = (long long int)res;
    cout << res << endl;
    return 0;
}