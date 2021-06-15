#include <iostream>
using namespace std;
int main(){
	int a, b, c;
    cin >> a >> b >> c;
    if ((a + b <= c) || (a + c <= b) || (b + c <= a))
        cout << "treugolnik ne syw,estvuet";
    else if (a != b && a != c && b != c)
        cout << "raznostoronnii";
    else if (a == b && b == c)
        cout << "ravnostoronni";
    else
        cout << "ravnobedrennii";
    return 0;
}