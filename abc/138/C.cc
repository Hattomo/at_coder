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

double res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    double V[60];
    cin >> N;
    for(int i = 0; i < N; i++ )
    {
        cin >> V[i];
    }
    sort(V, V + N);
    for(int i = 0; i < N-1; i++ )
    {
        V[i + 1] = (V[i] + V[i+1])/2;
    }
    cout << V[N-1] << endl;
    return 0;
}