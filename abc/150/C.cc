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

int res;

int main()
{
    int n, a[8], p[8], q[8];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }
    for (int i = 0; i < n; i++)
    {
        int now = i + 1;
        a[i] = now;
    }
    int A = 0, B = 0;
    int cnt = 0;
    do
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] != p[i])
            {
                break;
            }
            if (i == n - 1)
            {
                A = cnt;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != q[i])
            {
                break;
            }
            if (i == n - 1)
            {
                B = cnt;
            }
        }
        cnt++;
    } while (next_permutation(a, a + n));
    cout << abs(A - B);
    return 0;
}