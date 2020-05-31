#include <iostream>
#include <vector>
#include <cstdlib>
#include <limits>
using namespace std;

int INF = std::numeric_limits<int>::infinity();


int chmin(int a, int b)
{
    if (a > b)
    {
        a = b;
        return b;
    }
    return a;
}

int main()
{
    int N;
    cin >> N;
    int *cinlist = new int[N];
    int *datatmp = new int[N];

    for (int i = 0; i < N; i++)
    {
        cin >> cinlist[i];
        datatmp[i] = INF;
    }

    datatmp[0] = 0;
    for (int i = 0; i < N; i++)
    {
        if (i == 0)
        {
        }
        else if (i == 1)
        {
            datatmp[i] = abs(cinlist[i - 1] - cinlist[i]);
        }
        else if (i > 1)
        {
            datatmp[i] = chmin(datatmp[i - 1] + abs(cinlist[i - 1] - cinlist[i]), datatmp[i - 2] + abs(cinlist[i] - cinlist[i - 2]));
        }
        cout << "i:" << i <<" = "<< datatmp[i] << endl;
    }
    cout << datatmp[N-1] << endl;
    return 0;
}
