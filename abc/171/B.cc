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

int res=0;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N,K;
    cin >> N>>K;
    vector<int> payment(N);
    for(int i = 0; i < N; i++ )
    {
        cin >> payment[i];
    }
    sort(payment.begin(), payment.end());
    for(int i = 0; i < K; i++ )
    {
        res += payment[i];
    }
    cout << res << endl;
    return 0;
}