#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

#define PI 3.14159265358979323846264338327950L

int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string S, T;
    cin >> S >> T;

    if (S.length() < 11 && S.length() + 1 == T.length() && T.substr(0, S.length()) == S)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}