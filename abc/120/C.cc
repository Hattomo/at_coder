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

    string S;
    cin >> S;
    int red = 0, blue = 0;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == '0')
        {
            red++;
        }
        else
        {
            blue++;
        }
    }
    res = min(red, blue) * 2;
    cout << res << endl;
    return 0;
}