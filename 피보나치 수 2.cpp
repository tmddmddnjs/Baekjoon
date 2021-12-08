#include <iostream>
using namespace std;

long long fiboData[91] = { 0, };
long long fibo(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n <= 2) {
		return 1;
	}
	//아무 값이 없다면
	if (fiboData[n] == 0) {
		fiboData[n] = fibo(n - 1) + fibo(n - 2);
	}
	return fiboData[n];
}

int main() {
	int inputNum;
	cin >> inputNum;
	cout << fibo(inputNum);
}