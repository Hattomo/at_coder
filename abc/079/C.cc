#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
#include <ctime>
#include <vector>
#include <set>
#include <bitset>

using namespace std;
#define ll long long

string Op(bool opt)
{
    if (opt)
        return "+";
    return "-";
}

int main()
{
    string S;
    cin >> S;
    ll sum = 0;
    for (int i = 0; i < (1 << 4); i++)
    {
        bitset<3> op(i);
        sum = S.at(0) - 48;
        int sc = 1;
        for (int j = 0; j < op.size(); j++)
        {
            if (op.test(j))
                sum += S.at(sc) - 48;
            else
                sum -= S.at(sc) - 48;
            sc++;
        }
        if (sum == 7)
        {
            cout << S.at(0) << Op(op.test(0))
                 << S.at(1) << Op(op.test(1))
                 << S.at(2) << Op(op.test(2))
                 << S.at(3) << "=7" << endl;
            return 0;
        }
    }
}