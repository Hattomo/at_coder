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

    int N;
    cin >> N;
    res = 2;
    if (N == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    while (res <= N)
    {
        res *= 2;
    }

    cout << res / 2 << endl;
    return 0;
}