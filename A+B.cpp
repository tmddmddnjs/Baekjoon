#include <iostream>
#include <vector>
using namespace std;

void solution(int a) {
	int b, c;
	vector<int> count;
	for (int i = 0; i < a; i++) {
		cin >> b >> c;
		count.push_back(b + c);
	}
	for (int i = 0; i < a; i++) {
		cout << count[i] << endl;
	}
}

int main() {
	int a;
	cin >> a;
	solution(a);
}