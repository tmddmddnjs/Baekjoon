#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	int count[26] = {};
	//a~z까지 먼저 -1로 초기화
	for (int i = 0; i < 26; i++)
		count[i] = -1;
	//뒤에 중복되는 값은 빈 공백으로 교체
	//줄이면 뒤에 글자가 앞으로 와서 순서가 이상해짐
	for (int i = 0; i < s.length(); i++) {
		for (int j = i + 1; j < s.length(); j++) {
			if (s[i] == s[j]) {
				s.replace(j, 1, " ");
			}
		}
	}
	//해당 위치에 i를 +
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 97 || s[i] <= 122)
			count[s[i] % 97] = i;
	}
	for (int i = 0; i < 26; i++) {
		cout << count[i] << ' ';
	}
}