#include <iostream>

using namespace std;

int main() {
	LC_ALL(0, "");
	int n,i,res;
	res = 0;
	cin >> n;
	for (i = 1; i <= n; i++) {
		res = res + (i * 2 - 1);
		cout << res << " ";
	}
	cout << "\n" << "N^2 = " << res << endl;
	system("pause");
	return(0);
}
