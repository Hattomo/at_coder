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

int res;
int f(int x)
{
    if (0 < x)
    {
        return -(x + 1);
    }
    else if (x < 0)
    {
        return -x;
    }
    else
    {
        return x = -1;
    }
}

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int X, N;
    cin >> X >> N;
    vector<int> P(N);
    for (int i = 0; i < N; i++)
    {
        cin >> P[i];
    }
    if (N == 0)
    {
        res = X;
        cout << X << endl;
        return 0;
    }
    int min = 100000;
    int number = 0;
    int cnt = 0;
    bool flag = true;
    while (flag)
    {
        int data = abs(X + number);
        bool isOK = true;
        for (int j = 0; j < N; j++)
        {

            if (data == P[j])
            {
                isOK = false;
            }
        }
        if (isOK)
        {
            res = X + number;
            flag = false;
        }
        //cout << number << endl;
        number = f(number);
    }
    cout << res << endl;
    return 0;
}