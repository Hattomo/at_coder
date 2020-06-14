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
const int K_LIM = 500;

int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int q = 0; q < k; q++)
    {
        if (q > K_LIM)
        {
            break;
        }
        vector<int> b(n, 0);
        for (int i = 0; i < n; i++)
        {
            int l = max(0, i - a[i]);
            int r = min(n - 1, i + a[i]);
            b[l]++;
            if (r + 1 < n)
            {
                b[r + 1]--;
            }
        }
        for (int i = 1; i < n; i++)
        {
            b[i] += b[i - 1];
        }
        for (int i = 0; i < n; i++)
        {
            a[i] = b[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}