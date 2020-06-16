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
    vector<int> A(N);
    for (int i = 0; i < N - 1; i++)
    {
        cin >> A[i];
    }
    vector<int> boss(N, 0);
    for (int i = 0; i < N - 1; i++)
    {
        boss[A[i] - 1]++;
    }
    for (int i = 0; i < N; i++)
    {
        cout << boss[i] << endl;
    }
    return 0;
}