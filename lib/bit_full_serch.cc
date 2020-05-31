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

    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    set<int> ans;
    
    // (1 << N) means 2^N  <-- right shift
    for (int S = 0; S < (1 << N); S++)
    {
        int sum = 0;
        // shift i times & check bit==1 or not.
        for (int i = 0; i < N; i++)
        {
            // if A[i]==1 => sum += A[i]
            if ((S >> i) & 1)
            {
                sum += A[i];
            }
        }
        // insert to set & delete duplication
        ans.insert(sum);
    }
    cout << ans.size() << endl;
}