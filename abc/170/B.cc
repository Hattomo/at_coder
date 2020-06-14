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

string res = "No";

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int X, Y;
    cin >> X >> Y;
    int B = (Y - (2 * X)) / 2;
    int A = X - B;
    if (A + B == X && 2 * A + 4 * B == Y && 0 <= A && 0 <= B)
    {
        res = "Yes";
    }
    cout << res << endl;
    return 0;
}