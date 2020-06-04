#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
#include <ctime>
#include <vector>
#include <set>
#include <queue>
using namespace std;

#define PI 3.14159265358979323846264338327950L

long long int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long int A, B, C;
    cin >> A >> B >> C;
    long long int cnt = 0;
    long long int tmpA, tmpB, tmpC;
    tmpA = A;
    tmpB = B;
    tmpC = C;
    if (A == 1 && B == 1 && C == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    if (A == B && B == C)
    {
        cout << -1 << endl;
        return 0;
    }
    while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0)
    {
        A = tmpB / 2 + tmpC / 2;
        B = tmpA / 2 + tmpC / 2;
        C = tmpA / 2 + tmpB / 2;
        cnt++;
        tmpA = A;
        tmpB = B;
        tmpC = C;
    }

    res = cnt;
    cout << res << endl;
    return 0;
}