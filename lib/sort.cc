// https : //qiita.com/drken/items/44c60118ab3703f7727f

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
    int *a = new int[N];
    for (int i = 0; i < N;i++){
        cin >> a[i];
    }
    sort(a, a + N,greater<int>());
    // if vector
    // sort(a.begin(),a,end());
    // if greater
    // sort(a, a + N, greater<int>());
    for (int i = 0; i < N; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}