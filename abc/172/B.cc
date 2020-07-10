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
typedef long long ll;

#define PI 3.14159265358979323846264338327950L

int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string S,T;
    cin >> S>>T;
    res = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if(S[i]!=T[i]){
            res++;
        }
    }
    cout << res << endl;
return 0;
}