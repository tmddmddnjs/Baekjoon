#include <iostream>
using namespace std;

long long fiboData[1500000] = { 0, };
int M = 1000000;
/*
M = 10^k -> 15 * (10^k-1) = 1,500,000
*/
void fibo(int n) {
	fiboData[0] = 0;
	fiboData[1] = 1;
	for (int i = 2; i < 1500000; i++) {
		fiboData[i] = fiboData[i - 1] + fiboData[i - 2];
		//나머지를 넣어야함
		fiboData[i] = fiboData[i] % M; 
	}
}

int main() {
	long long inputNum;
	cin >> inputNum;
	fibo(inputNum);
	int P = (M / 10) * 15;
	cout << fiboData[inputNum % P] << endl;
}