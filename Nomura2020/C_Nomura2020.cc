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

    int N;
    cin >> N;
    int *data = new int[N];
    long long int sum = 0;
    for (int i = 0; i < N + 1; i++)
    {
        cin >> data[i];
        sum += data[i];
    }
    long long int extra = 1;
    long long int number = 1;
    bool flag = true;
    long long int  tmp = 0;
    for (int i = 0; i < N + 1; i++)
    {
        extra -= data[i];
        if (extra < 0)
        {
            res = -1;
            flag = false;
            break;
        }
        if (sum < extra)
        {
            flag = true;
            break;
        }
        extra = extra * 2;
    }

    if (flag == true)
    {

        for (int i = 0; i < N + 1; i++)
        {
            tmp += number;
            if (data[i] != 0)
            {
                sum -= data[i];
                number -= data[i];
            }
            if (number * 2 <= sum)
            {
                number = number * 2;
            }
            else if (number * 2 > sum)
            {
                number = sum;
            }
        }
        res = tmp;
    }

    cout << res << endl;
    return 0;
}