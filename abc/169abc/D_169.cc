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

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    
    
        long long n;
        cin >> n;
        int ans = 0;
        for (long long  i = 2; i * i <= n; i++)
        {
            long long z = i;
            while (n % z == 0)
            {
                n /= z;
                ans++;
                z *= i;
            }
            while (n % i == 0)
            {
                n /= i;
            }
        }
        if (n > 1)
            ans++;
        cout << ans << endl;
    }
