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

int res = -1;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int s;
    cin >> s;

    int data[1000000];

    bool flag = true;
    int cnt = 0;
    data[0] = s;

    while (flag)
    {
        if (s % 2 == 0)
        {
            s /= 2;
        }
        else
        {
            s = 3 * s + 1;
        }
        data[cnt + 1] = s;
        for (int i = 0; i <= cnt + 1; i++)
        {
            for (int j = 0; j < cnt + 1; j++)
            {
                if (data[i] == data[j] && i != j)
                {
                    flag = false;
                    res = i + 1;
                    //cout << data[i] << endl;
                    //cout << data[j] << endl;
                    break;
                }
            }
        }
        cnt++;
    }
    cout << res << endl;

    return 0;
}