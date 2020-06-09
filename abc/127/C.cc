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

int main()
{
    int n, m, ret = 0;
    cin >> n >> m;
    int max_l = 1, min_r = n + 1;
    for (int i = 0; i < m; ++i)
    {
        int l, r;
        cin >> l >> r;
        max_l = max(max_l, l);
        min_r = min(min_r, r);
    }
    cout << ((max_l <= min_r) ? min_r - max_l + 1 : 0) << endl;
    return 0;
}