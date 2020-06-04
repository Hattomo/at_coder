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

int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long int N, K;
    cin >> N >> K;

    if (N % K < K - N % K)
    {
        cout << N % K << endl;
    }
    else
    {
        cout << K - N % K << endl;
    }
    return 0;
}