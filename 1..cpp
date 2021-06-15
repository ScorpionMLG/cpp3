#include <iostream>
using namespace std;
int main(){	
    int a, b;	
    cout << "vvedite 4et and ne4et :"<<endl;
    cin >> a >> b;	
    if ((a == b) && (a % 2 == 1))	
        cout << "oba ne4et: " << b << "   " << a;	
    else if (a % 2 == 1)		
        cout << "ne4et: " << a;		
    else if ((a == b) && (a % 2 != 1))		
        cout << " ";	
    else
        cout<< "4et: " << b;	
    return 0;
}
