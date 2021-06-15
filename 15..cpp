#include <iostream>
using namespace std;
int main(){	
    int s, y;
    cout << "vvedite staj raboti: ";
    cin >> s;	
    cout << "Skol'ko vam let: ";
    cin >> y;
    if (s >= 20 && y <= 42)
        cout << "Vy prinyaty";	
    else		
        cout << "Vy ne prinyaty";
    return 0;
}