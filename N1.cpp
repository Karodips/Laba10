#include <iostream>

using namespace std;

int main() {
	LC_ALL(0, "");
	double i, price;
	cin >> price;
	for (i = 0.1; i <= 1; i += 0.1) cout << i * price << " ";
	cout << endl;
	system("pause");
	return(0);
}
