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

    int X;
    cin >> X;
    int prime[100000];
    prime[0] = 2;
    int cnt = 1;
    int number = 3;
    bool flag = true;
    bool isPrime = true;
    if (X == 2)
    {
        cout << 2 << endl;
        return 0;
    }
    while (flag)
    {
        for (int i = 0; i < cnt; i++)
        {
            if (number % prime[i] == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true)
        {
            prime[cnt] = number;
            if (X <= number)
            {
                res = number;
                flag = false;
            }
            cnt++;
        }
        number++;
        isPrime = true;
    }
    cout << res << endl;
    return 0;
}