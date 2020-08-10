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

    ll N,Q,sum;
    sum = 0;
    cin >> N;
    vector<ll> A(N);
    vector<ll> count(100000, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        sum += A[i];
        count[A[i] - 1]++;
    }
    cin >> Q;
    vector<pair<ll, ll>> BC(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> BC[i].first >> BC[i].second;
    }
    for(int i = 0; i < Q; i++ )
    {
        sum += count[BC[i].first - 1] * (BC[i].second - BC[i].first);
        count[BC[i].second - 1] += count[BC[i].first - 1];
        count[BC[i].first - 1] = 0;
        cout << sum << endl;
    }
    return 0;
}