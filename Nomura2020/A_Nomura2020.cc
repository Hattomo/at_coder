#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
#include <ctime>
#include <vector>
#include <set>
using namespace std;

#define PI 3.14159265358979323846264338327950L

int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int H1,M1,H2,M2,K;
    int time1, time2;
    cin >> H1>> M1>> H2>> M2>> K;
    time1 = H1 * 60 + M1;
    time2 = H2 * 60 + M2;
    res = time2 - time1 - K;
    cout << res << endl;
    return 0;
}