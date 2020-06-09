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

string res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;
    res = "yes";
    for (int i = 0; i < S.length(); i++)
    {
        for (int j = 0; j < S.length(); j++)
        {
            if (S[i] == S[j] && i != j)
            {
                res = "no";
                break;
            }
        }
    }
    cout << res << endl;
    return 0;
}