#include <bits/stdc++.h>

using namespace std;

void dfs(int o, vector<int> &V, vector<priority_queue<int, vector<int>, greater<int>>> &N, int* c) {
    V[o] = ++*c; 
    while (!N[o].empty()) {
        int n = N[o].top(); N[o].pop();
        if (!V[n]) dfs(n, V, N, c);
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m, r; cin >> n >> m >> r;
    vector<int> V(n+1);
    vector<priority_queue<int, vector<int>, greater<int>>> N(n+1);

    while (m--) { 
        int x, y; cin >> x >> y;
        N[x].push(y); N[y].push(x);
    }
    
    int c = 0;
    dfs(r, V, N, &c);

    for (int i = 1; i < V.size(); i++) {
        cout << V[i] << '\n';
    }

    return 0;
}