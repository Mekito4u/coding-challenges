#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


int main()
{
	int n;
	int m;
	cin >> n;
	cin >> m;
	vector<vector<int>> lines(n, vector<int>(m));
	lines[0][0] = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (lines[i][j] >= 1 && i + 1 < n && j + 2 < m) {
				lines[i + 1][j + 2] += lines[i][j];
			}
			if (lines[i][j] >= 1 && i + 2 < n && j + 1 < m) {
				lines[i + 2][j + 1] += lines[i][j];
			}
		}
	}
	cout << lines[n - 1][m - 1];
}
