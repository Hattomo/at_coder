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

    int A, B;
    int socket = 1;
    cin >> A >> B;
    int cnt = 0;
    while (socket < B)
    {
        socket += A-1;
        cnt++;
        //cout << socket << endl;
    }
    cout << cnt << endl;
    return 0;
}