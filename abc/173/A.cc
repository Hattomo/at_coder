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

    int N;
    cin >> N;
    res = N % 1000;
    if (res == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        res = 1000 - res;
    }
    cout << res << endl;
    return 0;
}