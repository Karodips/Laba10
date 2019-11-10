#include <iostream>

using namespace std;

int main() {
	LC_ALL(0, "");
	double i, res,n;
	res = 1;
	cin >> n;
	n = n / 10 + 1;
	for (i = 1.1; i <= n; i += 0.1) res = res * i;
	res = res * n;
	cout << res << endl;
	system("pause");
	return(0);
}
