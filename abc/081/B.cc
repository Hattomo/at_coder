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
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    int A[210];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    bool flag = true;
    int cnt = 0;
    while (flag)
    {
        for (int i = 0; i < N; i++)
        {
            if (A[i] % 2 == 0)
            {
                A[i] /= 2;
            }
            else
            {
                flag = false;
                break;
            }
        }
        cnt++;
    }
    cout << cnt - 1 << endl;
    return 0;
}