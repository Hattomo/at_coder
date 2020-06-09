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

    int A, B, C, X;
    cin >> A >> B >> C >> X;
    res = 0;
    for (int i = 0; i <= A; ++i)
    {
        for (int j = 0; j <= B; ++j)
        {
            for (int k = 0; k <= C; ++k)
            {
                int tmp = i * 500 + j * 100 + k * 50;
                if (tmp == X)
                    res++;
            }
        }
    }
    cout << res << endl;
    return 0;
}