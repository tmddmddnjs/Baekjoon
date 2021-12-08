#include <iostream>
#include <algorithm>
using namespace std;

string string_add(string a, string b) {
	int sum = 0;
	string result = "";
	while (!a.empty() || !b.empty() || sum) {
		if (!a.empty()) {
			sum += a.back() - 48;
			a.pop_back();
		}
		if (!b.empty()) {
			sum += b.back() - 48;
			b.pop_back();
		}
		result.push_back((sum % 10) + 48);
		sum /= 10;
	}
	reverse(result.begin(), result.end());
	return result;
}
string fiboData[10000];
int main() {
	int n;
	cin >> n;
	fiboData[0] = '0';
	fiboData[1] = '1';
	for (int i = 2; i <= n; i++) {
		fiboData[i] = string_add(fiboData[i - 1], fiboData[i - 2]);
	}
	cout << fiboData[n] << endl;
}