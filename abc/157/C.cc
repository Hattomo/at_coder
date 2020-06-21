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

    int N, M;
    cin >> N >> M;
    vector<pair<int, int>> SC(M);
    for (int i = 0; i < M; i++)
    {
        cin >> SC[i].first >> SC[i].second;
    }
    for (int i = 0; i < 1000; i++)
    {
        int keta = 1;
        int nx = i / 10;
        vector<int> d(1, i % 10);
        while (nx)
        {
            keta++;
            d.push_back(nx % 10);
            nx /= 10;
        }
        if (keta != N)
            continue;
        bool isOK = true;
        reverse(d.begin(), d.end());
        for (int j = 0; j < M; j++)
        {
            if (d[SC[j].first - 1] != SC[j].second)
                isOK = false;
        }
        if (isOK)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
