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

    int N;
    cin >> N;
    vector<int> h(N);
    for(int i = 0; i < N; i++ )
    {
        cin >> h[i];
    }
    res = 0;
    vector<pair<int, int>> water(1);
    water[0].first = -1;
    water[0].second = -1;
    bool flag = true;
    while (flag){
        for (int i = 0; i < N; i++){
            if(water[0].first==-1&&h[i]!=0){
                water[0].first = i;
            }else if(h[i]==0&&water[0].second==-1&&water[0].first!=-1){
                water[0].second = i-1;
            }
        }
        if(water[0].first!=-1&&water[0].second==-1){
            water[0].second = N-1;
        }
        flag = false;
        for (int i = 0; i < N; i++)
        {
            if(h[i]!=0){
                flag = true;
            }
        }

        if(water[0].first==-1&&water[0].second==-1){
            flag = false;
        }else{
            
            res++;
            for (int i = water[0].first; i < water[0].second + 1; i++)
            {
                h[i]--;
            }
            water[0].first = water[0].second = -1;
        }
    }
        cout << res << endl;
    return 0;
}