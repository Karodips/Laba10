#include <iostream>
#include <cmath>

using namespace std;

int main() {
	LC_ALL(0, "");
	int n, i;
	double res, a;
	res = 0;
	cin >> n >> a;
	for (i = 0; i <= n; i+=2) {
		res = res + pow(a, i);
	}
	for (i = 1; i <= n; i += 2) {
		res = res - pow(a, i);
	}
	cout << res << endl;
	system("pause");
	return(0);
}
