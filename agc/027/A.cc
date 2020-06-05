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

    int N, x;
    cin >> N >> x;
    int a[110];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    sort(a, a + N);
    int cnt = 0;
    while (0 < x && cnt < N - 1)
    {
        x -= a[cnt];
        if (0 <= x)
        {
            cnt++;
        }
    }

    if (0 < x && a[cnt] == x)
    {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}