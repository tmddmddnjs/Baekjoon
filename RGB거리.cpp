#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int cost[3];
	int loop;
	int rgb[1001][3];
	rgb[0][0] = 0;
	rgb[0][1] = 0;
	rgb[0][2] = 0;
	cin >> loop;
	for (int i = 1; i <= loop; i++) {
		cin >> cost[0] >> cost[1] >> cost[2];
		rgb[i][0] = min(rgb[i - 1][1], rgb[i - 1][2]) + cost[0];
		rgb[i][1] = min(rgb[i - 1][0], rgb[i - 1][2]) + cost[1];
		rgb[i][2] = min(rgb[i - 1][1], rgb[i - 1][0]) + cost[2];
	}
	cout << min(rgb[loop][2], min(rgb[loop][0], rgb[loop][1]));
}