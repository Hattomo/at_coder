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

int maxtime(int x)
{
    return (x + 9) / 10 * 10;
}
int remtime(int x)
{
    return maxtime(x) - x;
}
int main()
{
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;
    int sum = maxtime(A) + maxtime(B) + maxtime(C) + maxtime(D) + maxtime(E);
    sum -= max({remtime(A), remtime(B), remtime(C), remtime(D), remtime(E)});
    cout << sum << endl;
    return 0;
}