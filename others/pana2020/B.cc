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

    long long int H, W;
    cin >> H >> W;
    if (H == 1 || W == 1)
    {
        res = 1;
    }
    else if (H % 2 == 0 || W % 2 == 0)
    {
        res = H * W / 2;
    }
    else
    {
        res = H * W / 2 + 1;
    }
    cout << res << endl;
    return 0;
}