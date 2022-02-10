#include <stack>
#include <iostream>

using namespace std;

int main() {
	stack<int> s;
	int k = 0, num = 0;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}
	int answer = 0;
	while (!s.empty()) {
		answer += s.top();
		s.pop();
	}
	cout << answer;
}