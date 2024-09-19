#include <bits/stdc++.h>

using namespace std;

void dfs(vector<int>& v, vector<vector<int>>& l, int x) {
    for (int i = 0; i < l[x].size(); i++) {
        int y = l[x][i];
        if (!v[y]) {
            v[y] = x;
            dfs(v, l, y);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector<int> v(n + 1);
    vector<vector<int>> l(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b;
        l[a].push_back(b); l[b].push_back(a);
    }

    v[1] = 1;
    dfs(v, l, 1);

    for (int i = 2; i <= n; i++) {
        cout << v[i] << '\n';
    }

    return 0;
}