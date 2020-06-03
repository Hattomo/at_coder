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
    int res = -1;
    for (int i = 0; i < N + 1; i++)
    {
        if ((int)floor(i * 1.08) == N)
        {
            res = i;
        }
    }
    if (res == -1)
    {
        cout << ":(" << endl;
        return 0;
    }
    cout << res << endl;

    return 0;
}