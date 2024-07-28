#include <bits/stdc++.h>

using namespace std;

int DP[16][16];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for (int i = 1; i <= 15; i++) {
        DP[0][i] = i;
    }

    for (int y = 1; y <= 15; y++) {
        for (int x = 1; x <= 15; x++) {
            DP[y][x] = DP[y][x - 1] + DP[y - 1][x];
        }
    }

    int t; cin >> t;
    while (t--) {
        int k, n; cin >> k >> n;
        cout << DP[k][n] << '\n';
    }

    return 0;
}