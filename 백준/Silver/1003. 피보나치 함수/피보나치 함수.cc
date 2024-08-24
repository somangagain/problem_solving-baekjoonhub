#include <bits/stdc++.h>

using namespace std;

int DP[41][2];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    DP[0][0] = 1;
    DP[1][1] = 1;
    for (int i = 2; i <= 40; i++) {
        DP[i][0] = DP[i - 1][0] + DP[i - 2][0];
        DP[i][1] = DP[i - 1][1] + DP[i - 2][1];
    }

    int T; cin >> T;
    while (T--) {
        int t; cin >> t;
        cout << DP[t][0] << ' ' << DP[t][1] << '\n';
    }

    return 0;
}