#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	int count[26] = {};
	//a~z���� ���� -1�� �ʱ�ȭ
	for (int i = 0; i < 26; i++)
		count[i] = -1;
	//�ڿ� �ߺ��Ǵ� ���� �� �������� ��ü
	//���̸� �ڿ� ���ڰ� ������ �ͼ� ������ �̻�����
	for (int i = 0; i < s.length(); i++) {
		for (int j = i + 1; j < s.length(); j++) {
			if (s[i] == s[j]) {
				s.replace(j, 1, " ");
			}
		}
	}
	//�ش� ��ġ�� i�� +
	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 97 || s[i] <= 122)
			count[s[i] % 97] = i;
	}
	for (int i = 0; i < 26; i++) {
		cout << count[i] << ' ';
	}
}