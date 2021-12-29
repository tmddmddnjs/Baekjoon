#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, x;
	cin >> n >> x;
	vector<int> count;

	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		count.push_back(input);
	}
	for (int i = 0; i < n; i++) {
		if (count[i] < x) {
			cout << count[i] << ' ';
		}
	}
}