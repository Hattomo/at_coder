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
    int N, M;
    cin >> N >> M;
    int A[M], B[M];
    vector<int> adj[N];
    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
        adj[A[i]].push_back(B[i]); //data store
        adj[B[i]].push_back(A[i]);
    }
    deque<int> q;
    q.push_back(0); // init queue with 0
    int ans[N]{}; // anser
    bool vis[N]{}; // see or not
    vis[0] = true;
    while (!q.empty())
    {
        int v = q.front();
        q.pop_front();
        for (int i : adj[v])
        {
            if (vis[i])
                continue;
            ans[i] = v;
            q.push_back(i);
            vis[i] = true;
        }
    }
    cout << "Yes\n";
    for (int i = 1; i < N; i++)
    {
        cout << ans[i] + 1 << "\n";
    }
    return 0;
}