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

ll res = 0;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;
    vector<ll> H(N + 50);
    vector<ll> ma(N + 50);
    for (int i = 1; i <= N; i++)
    {
        cin >> H[i];
        ma[i] = 0;
    }
    for (int i = 0; i < M; i++)
    {
        ll a, b;
        cin >> a >> b;
        ma[a] = max(ma[a], H[b]);
        ma[b] = max(ma[b], H[a]);
    }
    ll ans = 0;
    for (int i = 1; i <= N; i++)
    {
        ans += H[i] > ma[i];
    }
    cout << ans << endl;
    return 0;
}