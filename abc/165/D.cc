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

int f(ll A, ll B, ll x)
{
    return floor(A * x / B) - (A * floor(x / B));
}
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll A, B, N;
    cin >> A >> B >> N;
    res = f(A, B, min(B - 1, N));
    cout << res << endl;
    return 0;
}