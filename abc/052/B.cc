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
    string S;
    cin >> N >> S;
    res = 0;
    int tmp = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'I')
        {
            res++;
        }
        else
        {
            res--;
        }
        tmp = max(tmp, res);
    }
    cout << tmp << endl;
    return 0;
}