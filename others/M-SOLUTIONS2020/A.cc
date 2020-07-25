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

    int X;
    cin >> X;
    if (X < 600)
    {
        res = 8;
    }
    else if (600 <= X && X < 800)
    {
        res = 7;
    }
    else if (800 <= X && X < 1000)
    {
        res = 6;
    }
    else if (1000 <= X && X < 1200)
    {
        res = 5;
    }
    else if (1200 <= X && X < 1400)
    {
        res = 4;
    }
    else if (1400 <= X && X < 1600)
    {
        res = 3;
    }
    else if (1600 <= X && X < 1800)
    {
        res = 2;
    }
    else if (1800 <= X && X < 2000)
    {
        res = 1;
    }
    cout << res << endl;
    return 0;
}