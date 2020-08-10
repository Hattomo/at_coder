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

    int N, Y;
    cin >> N >> Y;
    vector<int> paper(3, -1);
    for (int i = 0; i < N+1; i++)
    {
        for (int j = 0; j < N - i+1; j++)
        {
            int k = N - i - j;
            if (10000 * i + 5000 * j + 1000 * k == Y)
            {
                paper[0] = i;
                paper[1] = j;
                paper[2] = k;
            }
        }
    }
    cout << paper[0] << " " << paper[1] << " " << paper[2] << endl;
    return 0;
}