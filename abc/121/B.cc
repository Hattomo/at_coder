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

    int N, M, C;
    cin >> N >> M >> C;
    int B[25];
    int A[25][25];
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        int tmp = 0;
        for (int j = 0; j < M; j++)
        {
            tmp += A[i][j] * B[j];
        }
        if (tmp + C > 0)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}