#include <bits/stdc++.h>

using namespace std;

void dfs(int o, vector<int> &V, vector<priority_queue<int>> &N, int d) {
    V[o] = d;
    while (!N[o].empty()) {
        int n = N[o].top(); N[o].pop();
        if (V[n] == -1) dfs(n, V, N, d + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, r; cin >> n >> m >> r;
    vector<int> V(n+1, -1);
    vector<priority_queue<int>> N(n+1);

    while (m--) { 
        int x, y; cin >> x >> y;
        N[x].push(y); N[y].push(x);
    }
    
    dfs(r, V, N, 0);

    for (int i = 1; i <= n; i++) {
        cout << V[i] << '\n';
    }

    return 0;
}