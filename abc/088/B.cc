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
    int card[100];
    for (int i = 0; i < N; i++)
    {
        cin >> card[i];
    }
    sort(card, card + N, greater<int>());
    int alice = 0;
    int bob = 0;

    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            alice += card[i];
        }
        else
        {
            bob += card[i];
        }
    }
    res = alice - bob;
    cout << res << endl;
    return 0;
}