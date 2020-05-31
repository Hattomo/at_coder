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

    int A, B, C, K;
    cin >> A >> B >> C >> K;
    if (K <= A)
    {
        res = K;
    }
    else
    {
        if (K - A <= B)
        {
            res = A;
        }
        else
        {
            res = A + 0 * (K - A) + (-1) * (K - A - B);
        }
    }
    cout << res << endl;
}