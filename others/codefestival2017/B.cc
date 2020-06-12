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
    int A[10];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int odds = 0, even = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odds++;
        }
    }
    if (odds == N)
    {
        res = pow(3, N) - 1;
    }
    else
    {
        res = pow(3, N) - pow(2, even);
    }

    cout << res << endl;
    return 0;
}