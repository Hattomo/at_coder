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
typedef long long ll;
using namespace std;

#define PI 3.14159265358979323846264338327950L

ll res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    ll N, K;
    cin >> N >> K;
    res = K * pow(K - 1, N - 1);
    cout << res << endl;
    return 0;
}