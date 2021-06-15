#include <iostream>
using namespace std;
int main(){
	int a;
	cin >> a;
	if (a < 7)
		cout << "dowkolnik";
	else if (a < 18)
		cout << "y4enik";
	else if (a < 60)
		cout << "rabo4ii";
	else
		cout << "pensioner";
	return 0;
}