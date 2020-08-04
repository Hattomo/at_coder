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

ll res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    ll N,D;
    cin >> N >> D;
    vector<pair<ll,ll>> XY(N);
    for(int i = 0; i < N; i++ )
    {
     
       cin >> XY[i].first >> XY[i].second;
    }
    res = 0;
    for(int i = 0; i < N; i++ )
    {
        if(pow(XY[i].first,2)+pow(XY[i].second,2)<=pow(D,2)){
            res++;
        }
    }
    cout << res << endl;
    return 0;
}