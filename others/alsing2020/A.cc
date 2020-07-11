
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
typedef long long ll;

#define PI 3.14159265358979323846264338327950L

int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int L, R, d;
    cin >> L >> R >> d;
    res = 0;
    for (int i = L; i < R + 1; i++)
    {
        if (i % d == 0)
        {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}