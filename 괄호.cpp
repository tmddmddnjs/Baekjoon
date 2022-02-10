#include <iostream>
#include <stack>
#include <string>

using namespace std;

void answer() {
	string s = "";
	stack<char> stack;
	char empty = ' ';
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (stack.empty()) {
			stack.push(s[i]);
			empty = stack.top();
		}
		else {
			if (empty == s[i]) {
				stack.push(s[i]);
			}
			else if (empty == '(' || s[i] == ')') {
				stack.pop();
			}
			else if (empty == ')' || s[i] == '(') {
				stack.push(s[i]);
			}
			if (!stack.empty()) {
				empty = stack.top();
			}
		}
	}
	if (stack.empty()) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	cout << endl;
}

int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		answer();
	}
}