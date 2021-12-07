#include <iostream>
#include <vector>
using namespace std;

int s[3] = { 300,60,10 };

void solution(int T) {
	int answer = 0;
	int second[3] = { 0, };

	if (T % 10 != 0) {
		cout << "-1";
		return;
	}
	int i = 0;
	while (answer != T) {
		answer += s[i];
		second[i]++;
		if (answer > T) {
			second[i]--;
			answer -= s[i];
			i++;
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << second[i] << ' ';
	}
}

int main() {
	int T = 0;
	cin >> T;
	solution(T);
}