#include <iostream>
#include <string>
using namespace std;

int K;
string S;

int main()
{
    cin >> K;
    cin >> S;

    if (S.length() <= K)
    {
        cout << S << endl;
    }
    else
    {
        cout << S.substr(0, K) + "..." << endl;
    }
    return 0;
}