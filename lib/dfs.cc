// https : //www.slideshare.net/chokudai/wap-atcoder2
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

// dfs
int dfs(int m, int n)
{
    if(n==1){
        return 1;
    }
    int ret = 0;
    for (int i = 0; i <= m;i++){
        ret += dfs(m - i, n - 1);
    }
    return ret;
}

int main(){
    // M => number of Apple
    // N => number of people
    int M, N;
    cin >> M >> N;
    res = dfs(M, N);
    cout << res << endl;
    return 0;
}