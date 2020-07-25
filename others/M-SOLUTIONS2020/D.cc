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

int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    long long int N;
    cin >> N;
    vector<long long int> A(N+1);
    for(int i = 0; i < N; i++ )
    {
        cin >> A[i];
    }
    A[N] = 0;
    long long int money = 1000;
    long long int stock = 0;
    for(int i = 0; i < N; i++ )
    {
        // buy
        if(A[i]<A[i+1]&&A[i]<=money){
            stock = money / A[i];
            money = money % A[i];
            //cout << i<<" : buy" << endl;
            //cout << "meney : "<<money <<"  stock: "<< stock << endl;
        }
        // sell
        else if (A[i] > A[i + 1])
        {
            money += stock * A[i];
            stock = 0;
            //cout << i << " : sell" << endl;
            //cout << A[i] << ":" << A[i+1] << endl;
            //cout << "meney : " << money << "  stock: " << stock << endl;
        }
    }
    if(stock!=0){
        money += stock * A[N - 1];
    }
    cout << money << endl;
    return 0;
}