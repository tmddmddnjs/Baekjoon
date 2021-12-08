#include <iostream>
using namespace std;

int fiboData[45] = { 0, };
int fibo(int n) {
	fiboData[0] = 0;
	fiboData[1] = 1;
	for (int i = 2; i <= n; i++) {
		fiboData[i] = fiboData[i - 1] + fiboData[i - 2];
	}
	return fiboData[n];
}

int main() {
	int inputNum;
	cin >> inputNum;
	cout << fibo(inputNum);
}