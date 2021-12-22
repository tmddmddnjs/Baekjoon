#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void repeat(vector<int> a) {
	for (int i = 0; i < a.size(); i++) 
		cout << a[i] << ' ';
	cout << endl;
}

int solution(int N, int K) {
	int answer = 0;
	int count = 0;
	vector<int> money{ 1,5,10,50,100,500,1000,5000,10000,50000 };
	/*vector<int> money(N);
	for (int i = 0; i < N; i++) {
		cin >> money[i];
	}*/
	sort(money.begin(), money.end(), greater<int>()); //내림차순

	int i = 0;
	while (!(answer == K)) {
		if (K < money[i]) {
			i++;
		}
		else {
			answer += money[i];
			count++;
			cout << "money : " << answer << ", count : " << count << endl;
		}
		if (K < answer) {
			answer -= money[i];
			count--;
			i++;
			cout << "money : " << answer << ", count : " << count << endl;
		}
	}
	cout << count;
	return answer;
}

int main() {
	int N, K;
	cin >> N >> K;
	solution(N, K);
}