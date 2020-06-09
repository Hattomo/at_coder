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

long long int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long int N, A, B;
    cin >> N >> A >> B;
    long long int q = N / (A + B);
    long long int r = N % (A + B);
    res = q * A + min(A, r);
    cout << res << endl;
    return 0;
}