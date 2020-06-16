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

int res = -1;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    int sum = 0;
    for (int i = 0; i < M; i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    if (sum <= N)
    {
        res = N - sum;
    }

    cout << res << endl;
    return 0;
}