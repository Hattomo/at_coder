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

    ll N, K;
    ll now, next;
    cin >> N >> K;
    vector<ll> A(N + 1);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    next = A[0];
    now = 1;
    for (int i = 0; i < K; i++)
    {
        now = next;
        next = A[next];
    }
    cout << now << endl;
    return 0;
}