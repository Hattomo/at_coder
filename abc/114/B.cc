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

#define PI 3.14159265358979323846264338327950L

long long int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;
    int N = S.size();
    int ans = 999;
    for (int i = 0; i <= N - 3; ++i)
    {
        int num = (S[i] - '0') * 100 + (S[i + 1] - '0') * 10 + S[i + 2] - '0';
        ans = min(ans, abs(num - 753));
    }
    cout << ans << endl;
    return 0;
}