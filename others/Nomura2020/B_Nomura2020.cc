#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
#include <ctime>
#include <vector>
#include <set>
using namespace std;

#define PI 3.14159265358979323846264338327950L

string res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string T;
    cin >> T;
    res = T;
    for (int i = 0; i < T.length(); i++)
    {
        if(T[i]=='?'){
            res[i] = 'D';
        }
    }
    cout << res << endl;
    return 0;
}