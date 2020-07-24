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
    vector<string> S(N);
    vector<int> num(4,0);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    for(int i = 0; i < N; i++ )
    {
        if(S[i]=="AC"){
            num[0]++;
        }else if(S[i]=="WA"){
            num[1]++;
        }else if(S[i]=="TLE"){
            num[2]++;
        }else{
            num[3]++;
        }
    }
    cout << "AC x " << num[0] << endl;
    cout << "WA x " << num[1] << endl;
    cout << "TLE x " << num[2] << endl;
    cout << "RE x " << num[3] << endl;
    return 0;
}