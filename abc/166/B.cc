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

int res = 0;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, K;
    cin >> N >> K;
    vector<int> sunuke(N, 0);
    for (int i = 0; i < K; i++)
    {
        int D;
        cin >> D;
        for (int j = 0; j < D; j++)
        {
            int tmp;
            cin >> tmp;
            sunuke[tmp - 1]++;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (sunuke[i] == 0)
        {
            res++;
        }
    }
    cout << res << endl;
    return 0;
}