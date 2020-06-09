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
    long long int H;
    cin >> H;
    long long int cnt = 0;
    while (0 < H)
    {
        if (H == 1)
        {
            H = 0;
        }
        else
        {
            H /= 2;
        }
        cnt++;
    }
    res = 1;
    for (int i = 0; i < cnt; i++)
    {
        res *= 2;
    }
    cout << res - 1 << endl;
    return 0;
}