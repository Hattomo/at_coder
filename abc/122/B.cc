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
    bool number[30];
    cin >> S;
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T')
        {
            number[i] = true;
        }
        else
        {
            number[i] = false;
        }
    }
    res = 0;
    int tmp = 0;
    bool flag = false;
    for (int i = 0; i < S.length(); i++)
    {
        if (number[i] == true && flag == false)
        {
            flag = true;
            tmp++;
            if (res < tmp)
            {
                res = tmp;
            }
        }
        else if (number[i] == true && flag == true)
        {
            tmp++;
            if (res < tmp)
            {
                res = tmp;
            }
        }
        else if (number[i] == false && flag == true)
        {
            if (res < tmp)
            {
                res = tmp;
            }
            flag = false;
            tmp = 0;
        }
    }
    cout << res << endl;
    return 0;
}