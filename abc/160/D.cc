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
    int N, X, Y;
    cin >> N >> X >> Y;
    vector<int> cs(N);
    for (int i = 1; N - i > 0; i++)
        cs[i] = N - i;
    for (int i = 1; i < N; ++i)
        for (int j = i + 1; j <= N; ++j)
            if (j - i > abs(X - i) + 1 + abs(Y - j))
            {
                --cs[j - i];
                ++cs[abs(X - i) + 1 + abs(Y - j)];
            }
    for (int k = 1; k < N; ++k)
        cout << cs[k] << endl;
    return 0;
}