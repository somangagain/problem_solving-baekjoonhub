    #include <bits/stdc++.h>

    using namespace std;

    int dfs(vector<bool> &v, vector<vector<int>> &a, int o) {
        v[o] = 1;
        int s = 1;

        for (int i = 0; i < a[o].size(); i++) {
            if (!v[a[o][i]]) {
                s += dfs(v, a, a[o][i]);
            }
        }

        return s;
    }

    int main()
    {
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int n, lc;
        vector<bool> v;
        vector<vector<int>> a;

        cin >> n >> lc;
        v.assign(n + 1, 0); a.assign(n + 1, vector<int>(0));

        for (int i = 0; i < lc; i++) {
            int x, y; cin >> x >> y;
            a[x].push_back(y); a[y].push_back(x);
        }

        int s = dfs(v, a, 1) - 1;
        cout << s;

        return 0;
    }