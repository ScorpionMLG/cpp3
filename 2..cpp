#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cout << "vedite tri raznyh chisla:"<<endl;
	cin >> a >> b >> c;
	if (a << b >> c or c << b >> a)
		cout << "srednee: " << b;
	else if (b << a >> c or c << a >> b)
		cout << "srednee: " << a;
	else
		cout << "srednee: " << c;
	return 0;
}