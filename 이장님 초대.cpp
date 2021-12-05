#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int treeCount = 0, answer = 0;
	cin >> treeCount;
	int managerCome = 1 + treeCount;
	vector<int> treeName(treeCount);
	for (int i = 0; i < treeCount; i++)
		cin >> treeName[i];
	sort(treeName.begin(), treeName.end(), greater<int>());
	//나무를 하나 심을 때마다 앞에 나무는 1씩 빼줘야함
	for (int i = 0; i < treeName.size(); i++)
		treeName[i] -= (treeCount - i);
	while (true) {
		for (int i = 0; i < treeName.size(); i++) 
			treeName[i] -= 1;
		managerCome += 1;
		answer = *max_element(treeName.begin(), treeName.end());
		if (answer == 0) break;
	}
	cout << managerCome + 1;
}