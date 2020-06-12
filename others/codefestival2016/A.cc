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
typedef long long ll;
using namespace std;

#define PI 3.14159265358979323846264338327950L

int res = 0;

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
    for (int i = 0; i < N; i++)
    {
        int you = A[A[i] - 1];
        if (i + 1 == you)
        {
            res++;
        }
    }
    cout << res / 2 << endl;
    return 0;
}