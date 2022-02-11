#include <iostream>
#include <stack>
#include <string>
using namespace std;

void solution(string s) {
	stack<char> stack;
	char temp = ' ';
	if (s[0] == '.') {
		return;
	}
	for (int i = 0; i < s.size(); i++) {
		//.을 만나면 끝
		if (s[i] == '.') {
			if (stack.empty()) {
				cout << "yes" << endl;
			}
			else {
				cout << "no" << endl;
			}
		}
		if (s[i] == '(' || s[i] == '[' || s[i] == ')' || s[i] == ']') {
			//제일 처음에 ) ] 가 들어오면 균형이 안됨
			if (stack.empty()) {
				if (s[i] == ')' || s[i] == ']') {
					cout << "no" << endl;
					break;
				}
			}
			if (stack.empty()) {
				if (s[i] == '(' || s[i] == '[') {
					stack.push(s[i]);
					temp = stack.top();
				}
			}
			else if (!stack.empty()) {
				if (temp == '(' && s[i] == ')' || temp == '[' && s[i] == ']') {
					stack.pop();
				}
				else if (temp == '(' && s[i] == '[' || s[i] == '(') {
					stack.push(s[i]);
				}
				else if (temp == '[' && s[i] == '[' || s[i] == '(') {
					stack.push(s[i]);
				}
				else if (temp == '(' && s[i] == ']' || temp == '[' && s[i] == ')') {
					cout << "no" << endl;
					break;
				}
				if (!stack.empty()) {
					temp = stack.top();
				}
			}
		}
		else {
			continue;
		}
	}
}

int main() {
	string s = "";
	while (true) {
		//스페이스 까지 받을려고
		getline(cin, s);
		if (s[0] == '.') {
			return 0;
		}
		solution(s);
	}
	/*solution("So when I die (the [first] I will see in (heaven) a score list).");
	solution("[ first in ] ( first out ).");
	solution("Half Moon tonight (At least it is better than no Moon at all].");
	solution("A rope may form )( a trail in a maze.");
	solution("Help( I[m being held prisoner in a fortune cookie factory)].");
	solution("([ (([( [ ] ) ( ) (( ))] )) ]).");
	solution(" .");
	solution(".");*/
}