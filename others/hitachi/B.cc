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

int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int A, B, M;
    cin >> A >> B >> M;
    int a[100000];
    int b[100000];
    int minA = 1000000;
    int minB = 1000000;
    for (int i = 0; i < A; i++)
    {
        cin >> a[i];
        if (a[i] < minA)
        {
            minA = a[i];
        }
    }
    for (int i = 0; i < B; i++)
    {
        cin >> b[i];

        if (b[i] < minB)
        {
            minB = b[i];
        }
    }

    res = minA + minB;
    for (int i = 0; i < M; i++)
    {
        int x, y, c;
        cin >> x >> y >> c;
        x--;
        y--;
        res = min(res, a[x] + b[y] - c);
    }

    cout << res << endl;
    return 0;
}