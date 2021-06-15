#include <iostream>
using namespace std;
int main(){
	int x, y;
	cin >> x >> y;
	if (x % y == 0)
		cout << x << "  delitsya na " << y;
	else
	{
		cout << x << "ne delitsya na " << y;
		cout <<endl<< "ostatok: " << x % y;
	}
	cout <<endl<< "chastnoe: " << x / y;
	return 0;
}