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
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    res = -1;
    int cnt = 0;
    int tmp = A[0];
    while (cnt < N + 1)
    {
        cnt++;
        if (tmp == 2)
        {
            res = cnt;
            break;
        }
        tmp = A[tmp-1];
    }
    cout << res << endl;
    return 0;
}