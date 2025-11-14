#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int m;
	int n;
	cin >> n;
	cin >> m;
	vector<vector<int>> nums(n, vector<int>(m));
	vector<vector<int>> min_lines(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> nums[i][j];
		}
	}

	min_lines[0][0] = nums[0][0];
	for (int i = 0; i < n; i++) {
		min_lines[i][0] = nums[i][0];
		if (i > 0) {
			min_lines[i][0] += min_lines[i - 1][0];
		}
	}
	for (int j = 0; j < m; j++) {
		min_lines[0][j] = nums[0][j];
		if (j > 0) {
			min_lines[0][j] += min_lines[0][j-1];
		}
	}
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			min_lines[i][j] = nums[i][j] + min(min_lines[i-1][j], min_lines[i][j-1]);
		}
	}
	cout << min_lines[n-1][m-1];
}
