#include <bits/stdc++.h>

using namespace std;

void dfs(int o, vector<pair<int, int>> &V, vector<priority_queue<int, vector<int>, greater<int>>> &N, int *c, int d) {
    V[o] = { ++*c, d };
    while (!N[o].empty()) {
        int n = N[o].top(); N[o].pop();
        if (V[n].second == -1) dfs(n, V, N, c, d + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, r; cin >> n >> m >> r;
    vector<pair<int, int>> V(n + 1, {0, -1});
    vector<priority_queue<int, vector<int>, greater<int>>> N(n+1);

    while (m--) { 
        int x, y; cin >> x >> y;
        N[x].push(y); N[y].push(x);
    }
    
    int c = 0;
    dfs(r, V, N, &c, 0);

    long long S = 0;
    for (int i = 1; i <= n; i++) {
        S += (long long)V[i].first * V[i].second;
    }

    cout << S;

    return 0;
}