#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

#define PI 3.14159265358979323846264338327950L

long long res;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int N;
    bool flag = true;
    //long long *array = new long long [N];
    long long array[100010];
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> array[i];
        if (array[i] == 0)
        {
            flag = false;
        }
    }

    res = 1;
    if (flag == false)
    {
        res = 0;
    }
    else
    {
        for (int i = 0; i < N; i++)
        {

            if (array[i] <= 1000000000000000000 / res)

            {
                res *= array[i];
            }
            else
            {
                res = -1;
                break;
            }
        }
    }

    cout << res << endl;
    return 0;
}