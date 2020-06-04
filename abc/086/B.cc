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

string res = "No";

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string a, b;
    cin >> a >> b;
    int number = stoi(a + b);
    for (int i = 1; i < 1000; i++)
    {
        if (number == i * i)
        {
            res = "Yes";
        }
    }

    cout << res << endl;
    return 0;
}