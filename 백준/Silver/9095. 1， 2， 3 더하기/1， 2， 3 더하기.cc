#include <bits/stdc++.h>

using namespace std;

int DP[11];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 4;
    for (int i = 4; i <= 10; i++) {
        DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];
    }

    int T; cin >> T;
    while (T--) {
        int x; cin >> x; cout << DP[x] << '\n';
    }

    return 0;
}