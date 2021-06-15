#include <iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a;
    if (a > 0) 
        b = 2 * a - 10;
    else
        if (a == 0) 
            b = 0;
        else
            b = 2 * abs(a) - 1;
    cout << b;
    return 0;
}