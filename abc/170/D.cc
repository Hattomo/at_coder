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

int res = 0;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    vector<int> data(1000005, 0);
    sort(A.begin(), A.end());
    for (int x : A)
    {
        if (data[x] != 0)
        {
            data[x] = 2;
            continue;
        }
        for (int i = x; i < 1000005; i += x)
        {
            data[i]++;
        }
    }
    res = 0;
    for (int x : A)
    {
        if (data[x] == 1)
        {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}