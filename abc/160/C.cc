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

    int K, N;
    cin >> K >> N;
    int house[200000];
    for (int i = 0; i < N; i++)
    {
        cin >> house[i];
    }
    int maxdistance = 0;
    sort(house, house + N);
    for (int i = 0; i < N - 1; i++)
    {
        int d = house[i + 1] - house[i];
        if (maxdistance < d)
        {
            maxdistance = d;
        }
    }
    if (maxdistance < K - house[N - 1] + house[0])
    {
        maxdistance = K - house[N - 1] + house[0];
    }
    cout << K - maxdistance << endl;
    return 0;
}