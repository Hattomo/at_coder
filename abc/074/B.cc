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

int res = 0;

int mindistance(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, K;
    int boll[110];
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> boll[i];
    }
    for (int i = 0; i < N; i++)
    {
        int d = mindistance(abs(boll[i]), abs(K - boll[i])) * 2;
        res += d;
    }
    cout << res << endl;
    return 0;
}