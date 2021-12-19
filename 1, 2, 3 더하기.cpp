#include <iostream>
#include <string>
using namespace std;

int dp[12];
int main() {
	int loop, n;
	cin >> loop;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for (int i = 4; i <= 11; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}
	for (int i = 0; i < loop; i++) {
		cin >> n;
		cout << dp[n] << "\n";
	}
}