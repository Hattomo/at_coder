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

int main()
{
    long long N;
    cin >> N;
    string res = "";
    while (N)
    {
        --N;
        res += (char)('a' + (N % 26));
        N /= 26;
    }
    reverse(res.begin(), res.end());
    cout << res << endl;

}