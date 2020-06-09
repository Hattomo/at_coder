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

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x = x2 - x1;
    int y = y2 - y1;
    cout << x2 - y << " " << y2 + x << " " << x1 - y << " " << y1 + x << endl;
    return 0;
}