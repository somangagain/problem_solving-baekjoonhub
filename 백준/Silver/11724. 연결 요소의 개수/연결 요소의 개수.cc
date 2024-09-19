    #include <bits/stdc++.h>

    using namespace std;

    void dfs(vector<int>& v, vector<vector<int>>& nb, int x) 
    {
        v[x] = 1;
        for (int i = 0; i < nb[x].size(); i++) {
            int y = nb[x][i];
            if (!v[y]) dfs(v, nb, y);
        }
    }

    int main()
    {
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int n, m; cin >> n >> m;
        vector<int> v(n + 1);
        vector<vector<int>> nb(n + 1, vector<int>());
        while (m--) {
            int a, b; cin >> a >> b;
            nb[a].push_back(b); nb[b].push_back(a);
        }

        int s = 0;
        for (int i = 1; i <= n; i++) {
            if (!v[i]) {
                dfs(v, nb, i);
                s++;
            }
        }

        cout << s;

        return 0;
    }