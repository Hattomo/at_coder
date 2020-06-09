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

    int N, K, Q;
    cin >> N >> K >> Q;
    int A[100000];
    int poi[100000];
    for (int i = 0; i < Q; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        poi[i] = K-Q;
    }
    for (int i = 0; i < Q; i++)
    {
        poi[A[i]-1]++;
    }
    for (int i = 0; i < N; i++)
    {
        if (poi[i] <= 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    //   cout << res << endl;
    return 0;
}