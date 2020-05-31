#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

#define PI 3.14159265358979323846264338327950L

int A, B, H, M;
double res;

int main()
{
    cin >> A >> B >> H >> M;

    res = sqrt(A * A + B * B - 2 * A * B * cos(abs((H * 30 + M * 0.5) - (M * 6)) * PI / 180));
    cout << fixed << setprecision(9) << res << endl;

    return 0;
}