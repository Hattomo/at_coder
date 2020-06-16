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
ll mod = 1000000000 + 7;
int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    ll N, K;
    ll ans = 0;
    cin >> N >> K;

    for (long long i = K; i <= N + 1; i++)
        ans = (ans + i * (N - i + 1) + 1) % 1000000007;
    cout << ans << endl;

    return 0;
}