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

string res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    ll A, V, B, W, T;
    cin >> A >> V >> B >> W >> T;
    res = "NO";
    if (abs(B - A) <= (V - W) * T)
    {
        res = "YES";
    }
    cout << res << endl;
    return 0;
}