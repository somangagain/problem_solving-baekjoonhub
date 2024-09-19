    #include <bits/stdc++.h>

    using namespace std;

    struct Node {
        int x;
        int y;
    };

    Node dir[4] = { {-1, 0}, {1, 0}, {0, -1}, {0, 1} };

    int main()
    {
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int n, m; cin >> n >> m;
        vector<vector<int>> a(m + 1, vector<int>(n + 1, 0));
        vector<vector<int>> v(m + 1, vector<int>(n + 1, 0));
        vector<vector<int>> d(m + 1, vector<int>(n + 1, 0));
        for (int y = 1; y <= n; y++) {
            string s; cin >> s;
            for (int x = 1; x <= m; x++) {
                a[x][y] = s[x - 1] == '1' ? 1 : 0;
            }
        }

        queue<Node> Q;
        Q.push({ 1,1 }); v[1][1] = d[1][1] = 1;

        while (!Q.empty()) {
            Node o = Q.front(); Q.pop();
            for (int i = 0; i < 4; i++) {
                Node next = { o.x + dir[i].x, o.y + dir[i].y };
                if (next.x <= 0 || next.x > m) continue;
                if (next.y <= 0 || next.y > n) continue;
                if (!v[next.x][next.y] && a[next.x][next.y]) {
                    Q.push({next.x,next.y}); v[next.x][next.y] = 1;
                    d[next.x][next.y] = d[o.x][o.y] + 1;
                }
            }
        }

        cout << d[m][n];

        return 0;
    }