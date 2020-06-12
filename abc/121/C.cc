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

int main()
{
    long long int N, M;
    cin >> N >> M;

    vector<pair<long long int, long long int>> data(N);
    for (int i = 0; i < N; i++)
        cin >> data[i].first >> data[i].second;

    sort(data.begin(), data.end());

    long long int count = 0;
    long long int ans = 0;
    for (int i = 0; i < N; i++)
    {
        if (data[i].second > M)
        {
            ans += M * data[i].first;
            break;
        }
        else
        {
            ans += data[i].second * data[i].first;
            M -= data[i].second;
        }
    }
    cout << ans << endl;

    return 0;
}