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

string res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string s;
    int count = 0;
    cin >> s;
    for(int i = 0; i < s.length(); i++ )
    {
        if(s[i]=='0'){
            res.push_back('0');
        }else if(s[i]=='1'){
            res.push_back('1');
        }
        else
        {
            if(0<res.length())
                res.pop_back();
        }
    }
    cout << res << endl;
    return 0;
}