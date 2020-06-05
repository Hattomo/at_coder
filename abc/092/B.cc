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

    int N, D, X;
    cin >> N >> D >> X;
    int A[110];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    res = 0;
    for (int i = 0; i < N ; i++)
    {
        int tmp = 0;
        int cnt = 0;
        while (cnt * A[i] + 1 <= D)
        {
            tmp += 1;
            cnt++;
        }
        res += tmp;
    }
    res += X;
    cout << res << endl;
    return 0;
}