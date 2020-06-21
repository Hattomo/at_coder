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

double res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    double N, K;
    cin >> N >> K;
    vector<double> p(N);
    vector<double> add(N, 0);
    double max = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
        p[i]++;
        p[i] /= 2;
    }
    add[0] = p[0];
    for (int i = 1; i < N; i++)
    {
        add[i] = p[i] + add[i - 1];
    }
    if(N==K){
        cout << fixed << setprecision(15) << add[N - 1] << endl;
        return 0;
    }
    for (int i = 0; i <= N - K; i++)
    {
        if (max < add[i + K] - add[i])
        {
            max = add[i + K] - add[i];
        }
    }
    cout << fixed << setprecision(15) << max << endl;
    return 0;
}
