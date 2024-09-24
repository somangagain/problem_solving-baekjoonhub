#include <bits/stdc++.h>
using namespace std;

int DP[101][100001];

int main(void)
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int n, k; cin >> n >> k;

	int w, v;
	for (int i = 1; i <= n; i++) {
		cin >> w >> v;
		for (int j = 1; j <= k; j++) 
			DP[i][j] = (j >= w) ? max(DP[i - 1][j], DP[i - 1][j - w] + v) : max(DP[i - 1][j], DP[i][j - 1]);
	}

	cout << DP[n][k];

	return 0;
}