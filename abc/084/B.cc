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

string res = "Yes";

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int A, B;
    string S;
    cin >> A >> B >> S;
    for (int i = 0; i < A; i++)
    {
        if (
            S[i] != '1' &&
            S[i] != '2' &&
            S[i] != '3' &&
            S[i] != '4' &&
            S[i] != '5' &&
            S[i] != '6' &&
            S[i] != '7' &&
            S[i] != '8' &&
            S[i] != '9' &&
            S[i] != '0')
        {
            res = "No";
            break;
        }
    }
    if (S[A] != '-')
    {
        res = "No";
    }
    for (int i = 0; i < B; i++)
    {
        if (
            S[A + 1 + i] != '1' &&
            S[A + 1 + i] != '2' &&
            S[A + 1 + i] != '3' &&
            S[A + 1 + i] != '4' &&
            S[A + 1 + i] != '5' &&
            S[A + 1 + i] != '6' &&
            S[A + 1 + i] != '7' &&
            S[A + 1 + i] != '8' &&
            S[A + 1 + i] != '9' &&
            S[A + 1 + i] != '0')
        {
            res = "No";
            break;
        }
    }
    cout << res << endl;
    return 0;
}