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

int res = 0;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, M, X;
    cin >> N >> M >> X;
    int A[110];
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
    }
    int cost = 0;
    int pos = X;
    while (pos >= 0)
    {
        for (int i = 0; i < M; i++)
        {
            if (A[i] == pos)
            {
                cost++;
            }
        }
        pos--;
        //cout << pos << endl;
    }
    pos = X;
    while (pos <= N)
    {
        for (int i = 0; i < M; i++)
        {
            if (A[i] == pos)
            {
                res++;
            }
        }
        pos++;
    }
    if (cost < res)
    {
        res = cost;
    }
    cout << res << endl;
    return 0;
}