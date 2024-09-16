    #include <bits/stdc++.h>

    using namespace std;

    int DP[100001];

    int main()
    {
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int n, m; cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            int x; cin >> x;
            DP[i] = DP[i - 1] + x;
        }

        while (m--) {
            int s, e; cin >> s >> e;
            cout << DP[e] - DP[s - 1] << '\n';
        }

        return 0;
    }