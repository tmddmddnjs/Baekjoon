#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> people = {};
	int number, input;
	int sum = 0;

	//�Է�
	cout << "�ο� �� : ";
	cin >> number;
	cout << endl;
	for (int i = 0; i < number; i++) {
		cout << i + 1 << " : ";
		cin >> input;
		people.push_back(input);
	}
	//����
	sort(people.begin(), people.end());
	//���ϱ�
	for (int i = 0; i < people.size(); i++) {
		for (int j = 0; j <= i; j++) {
			sum += people[j];
		}
	}
	cout << sum;
}