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

    int A, B, C;
    int data[5];
    cin >> data[0] >> data[1] >> data[2];
    sort(data, data + 3);
    int shortage = data[2] - data[0] + data[2] - data[1];
    if (shortage % 2 == 0)
    {
        res = shortage / 2;
    }
    else
    {
        res = (shortage + 3) / 2;
    }

    cout << res << endl;
    return 0;
}