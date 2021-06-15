#include <iostream>
using namespace std;
int main(){
	int x, y;
	cin >> x;
	cout << "Vo chto perevesti?"<<endl;
	cout<<"chtoby perevesti v bajty: vvedite 1"<<endl;
	cout<<"kilobajty: 2"<<endl;
	cin >> y;
	switch (y)
	{
		case 1:
			cout << x * 1024;
			break;
		case 2:
			cout << x / 1024.0;
			break;
		default:
			cout << "vvedite po instrukcii";
	}
	return 0;
}