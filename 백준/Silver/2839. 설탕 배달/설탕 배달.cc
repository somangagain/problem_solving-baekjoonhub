#include <bits/stdc++.h>

using namespace std;

int DP[5001];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for (int i = 0; i <= 5000; i++) DP[i] = -1;
    DP[3] = DP[5] = 1;

    int N; cin >> N;

    for (int i = 6; i <= N; i++) {
        if (DP[i - 3] != -1) DP[i] = DP[i - 3] + 1;
        if (DP[i - 5] != -1 && (DP[i] == -1 || DP[i] - 1 > DP[i - 5])) DP[i] = DP[i - 5] + 1;
    }

    cout << DP[N];

    return 0;
}