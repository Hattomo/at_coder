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

    vector<ll> data(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> data[i];
    }
    sort(data.begin(), data.end());
    if (data[2] % 2 == 0)
    {
        res = 0;
    }
    else
    {
        res = data[0] * data[1];
    }
    cout << res << endl;
    return 0;
}