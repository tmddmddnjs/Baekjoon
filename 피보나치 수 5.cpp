#include <iostream>
using namespace std;

int fiboData[10000] = { 0, };

int fibo(int n) {
	fiboData[0] = 0;
	fiboData[1] = 1;
	if (n == 0)
		return 0;
	else if (n == 1 || n == 2)
		return 1;
	else if (fiboData[n] == 0) {
		for (int i = 2; i <= n; i++) {
			fiboData[i] = fiboData[i - 1] + fiboData[i - 2];
		}
		return fiboData[n];
	}
}

int main() {
	int n;
	cin >> n;
	cout << fibo(n);
}