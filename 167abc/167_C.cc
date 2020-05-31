#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#include <algorithm>
#include <ctime>
using namespace std;

#define PI 3.14159265358979323846264338327950L

int INF = INT32_MAX;
int res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N, M, X;
    cin >> N >> M >> X;
    int *algo = new int[M];
    int **array = new int *[N];
    int payment = INF;

    for (int i = 0; i < M; i++)
    {
        algo[i] = 0;
    }

    for (int i = 0; i < N; i++)
    {
        int *tmp = new int[M + 1];
        for (int j = 0; j < M + 1; j++)
        {
            cin >> tmp[j];
            //cout << "```" << tmp[j]<<endl;
            //cout << "**"<<tmp[0] << tmp[1] << tmp[2] << tmp[3] <<endl;
        }
        array[i] = tmp;
        //cout << "@"<<array[i][0] << array[i][1] << array[i][2] << array[i][3] << endl;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M + 1; j++)
        {
            //cout << array[i][j] << endl;
        }
    }

    int *level = new int[M];
    for (int i = 0; i < M; i++)
    {
        level[i] = 0;
    }

    for (int i = 1; i < (1 << N); i++)
    {
        int paymenttmp = 0;
        for (int j = 0; j < N; j++)
        {
            if (i & (1 << j))
            {
                paymenttmp += array[j][0];
                for (int k = 0; k < M; k++)
                {
                    level[k] += array[j][k + 1];
                }
            }
        }

        for (int j = 0; j < M; j++)
        {
            if (level[j] < X)
            {
                for (int i = 0; i < M; i++)
                {
                    level[i] = 0;
                }
                break;
            }
            if (j == M - 1)
            {
                if (paymenttmp < payment)
                {
                    payment = paymenttmp;
                    for (int i = 0; i < M; i++)
                    {
                        level[i] = 0;
                    }
                }
                else
                {
                    for (int i = 0; i < M; i++)
                    {
                        level[i] = 0;
                    }
                }
            }
        }
    }
    if (payment != INF)
    {
        cout << payment << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}