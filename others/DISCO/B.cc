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

    int N;
    cin >> N;
    long long int A[200000];
    long long int right = 0, left = 0;
    for(int i = 0; i < N; i++ )
    {
        cin >> A[i];
    }
    for(int i = 0; i < N; i++ )
    {
        left += A[i];
    }
    long long int min = left;
    for(int i = 0; i < N; i++ )
    {
        left -= A[i];
        right += A[i];
        if(abs(right-left)<min){
            min = abs(right - left);
        }
    }
    cout << min << endl;
    return 0;
}