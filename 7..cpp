#include <iostream>
using namespace std;
int main(){
	double a, b, c, d;
	cin >> a >> b >> c;
	if ((b*b) - 4 * a * c >= 0){
		d = (-1 * b + sqrt(b*b - 4 * a * c)) / (2 * a);
		cout << "pervyj: " << d << "\n";
		d = (-1 * b - sqrt(b*b - 4 * a * c)) / (2 * a);
		cout << "vtoroj: " << d;
	}
	else
		cout << "d = 0";
	return 0;
}