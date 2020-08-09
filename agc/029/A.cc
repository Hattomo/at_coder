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

ll res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;
    ll N = S.size();
    res = 0;
    vector<ll> Black(N, 0);
    ll black_count = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'B')
        {
            black_count++;
        }
        Black[i] = black_count;
    }
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'W')
        {
            res += Black[i];
        }
    }
    cout << res << endl;
    return 0;
}