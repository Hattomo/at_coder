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

    int N, A, B;
    string S;
    cin >> N >> A >> B;
    cin >> S;
    int passA = 0;
    int passB = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'a' && passA + passB < A + B)
        {
            cout << "Yes" << endl;
            passA++;
        }
        else if (S[i] == 'b' && passA + passB < A + B && passB < B)
        {
            cout << "Yes" << endl;
            passB++;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    //cout << res << endl;
    return 0;
}