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
    string alpabet = "abcdefghijklmnopqrstuvwxyz";
    string S;
    cin >> S;
    res = "None";
    for (int i = 0; i < 26; i++)
    {
        bool flag = true;
        for (int j = 0; j < S.length(); j++)
        {
            if(alpabet[i]==S[j]){
                flag = false;
            }
        }
        if(flag){
            res = alpabet[i];
            break;
        }
    }
    cout << res << endl;
    return 0;
}