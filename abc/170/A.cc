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

    for (int i = 0; i < 5; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp == 0)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}