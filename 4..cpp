#include <iostream>
using namespace std;
int main(){
	char x;
	cin >> x;
	if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
		cout << "Eto bukva:"<<endl << x;
	else
		cout << "Eto ne bukva, a simvol" <<endl<< x;
	return 0;
}