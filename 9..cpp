#include <iostream>
using namespace std;
int main(){
    float x, y, r, h;
    cout << "Koordinaty tochki: ";
    cin >> x >> y;
    cout << "Radius kruga: ";
    cin >> r;
    h = sqrt(x * x + y * y);
    cout << "Gipotenuza ravna " << h;
    if (h > r)
        cout << "Tochka ne prinadlezhit krugu"<<endl;
    else         
        cout<<endl<<"Tochka prinadlezhit krugu"<<endl;	
    return 0;
}