#include <iostream>
using namespace std;

int N;
int main(){
    cin >> N;
    int value;
    value = N % 10;
    if (
        value == 2 || 
        value == 4 || 
        value == 5 || 
        value == 7 || 
        value == 9
        ){
        cout << "hon" << endl;
    }
    else if (
        value == 3 
    )
    {
        cout << "bon" << endl;
    }else{
        cout << "pon" << endl;
    }
    return 0;
}