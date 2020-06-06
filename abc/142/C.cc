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

    int N;
    cin >> N;
    int A[100000];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int rev[100000];
    for (int i = 0; i < N; i++)
    {
        rev[A[i] - 1] = i + 1;
    }
    for (int i = 0; i < N; i++)
    {
        cout << rev[i] << endl;
    }
    return 0;
}