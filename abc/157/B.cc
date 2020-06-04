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

    int card[3][3];
    int N, B;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> card[i][j];
        }
    }
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> B;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (card[i][j] == B)
                {
                    card[i][j] = 0;
                }
            }
        }
    }
    if (
        card[0][0] == 0 && card[0][1] == 0 && card[0][2] == 0 ||
        card[1][0] == 0 && card[1][1] == 0 && card[1][2] == 0 ||
        card[2][0] == 0 && card[2][1] == 0 && card[2][2] == 0 ||
        card[0][0] == 0 && card[1][0] == 0 && card[2][0] == 0 ||
        card[0][1] == 0 && card[1][1] == 0 && card[2][1] == 0 ||
        card[0][2] == 0 && card[1][2] == 0 && card[2][2] == 0 ||
        card[0][0] == 0 && card[1][1] == 0 && card[2][2] == 0 ||
        card[0][2] == 0 && card[1][1] == 0 && card[2][0] == 0)
    {
        res = "Yes";
    }
    else
    {
        res = "No";
    }
    cout << res << endl;
    return 0;
}