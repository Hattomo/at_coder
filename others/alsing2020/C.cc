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

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    double N;
    cin >> N;
    vector<double> ans(N + 1, 0);

    for (double z = 1; z * z < N; z++)
    {
        for (double y = 1; y * y < N; y++)
        {

            for (double x = 1; x * x < N; x++)
            {
                double n = pow(x + y, 2) + pow(y + z, 2) + pow(z + x, 2);
                if (n < 2 * (N + 1))
                {
                    ans[n / 2 - 1] += 1;
                }
            }
        }
    }
    for (double i = 0; i < N; i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}