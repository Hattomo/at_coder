// red green blue
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

    int A,B,C,K;
    cin >> A >> B >> C>> K;
    res = "No";
    int cnt = 0;
    while(B<=A){
        B *= 2;
        cnt++;
    }
    while(C<=B){
        C *= 2;
        cnt++;
    }
    if(cnt<=K){
        res = "Yes";
    }
    cout << res << endl;
    return 0;
}