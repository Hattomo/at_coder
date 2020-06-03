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

long long int res = 100000000000;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    int X[110];
    if (N == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }
    sort(X, X + N);
    for (int i = X[0]; i <= X[N - 1]; i++)
    {
        int power = 0;
        for (int j = 0; j < N; j++)
        {
            power += (X[j] - i) * (X[j] - i);
        }
        if (power < res)
        {
            res = power;
        }
    }
    cout << res << endl;
    return 0;
}