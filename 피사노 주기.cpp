#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int P, N, M;
	cin >> P;
	for (int i = 0; i < P; i++) {
		cin >> N >> M;
		int first = 0, second = 1, count = 0;
		while (true) {
			int temp = (first + second) % M;
			first = second;
			second = temp;
			count++;
			cout << first << ' ' << second;
			if (first == 0 && second == 1) {
				break;
			}
		}
		cout << N << ' ' << count << endl;
	}
}