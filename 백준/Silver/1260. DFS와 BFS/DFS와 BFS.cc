#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> A;
vector<int> V;

void dfs(int x) {
    V[x] = 1; cout << x << ' ';
    for (int i = 1; i < A[x].size(); i++) {
        if (A[x][i] && !V[i]) dfs(i);
    }
}

void bfs(int s) {
    queue<int> Q;
    Q.push(s);
    V[s] = 1;
    
    while (!Q.empty()) {
        int x = Q.front(); Q.pop();
        cout << x << ' ';
        for (int i = 1; i < A[x].size(); i++) {
            if (A[x][i] && !V[i]) {
                Q.push(i);
                V[i] = 1;
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, M, O; cin >> N >> M >> O;
    A.resize(N + 1); for (int i = 0; i < A.size(); i++) { A[i].resize(N + 1); }
    V.resize(N + 1);

    while (M--) {
        int a, b; cin >> a >> b;
        A[a][b] = A[b][a] = 1;
    }

    dfs(O);

    cout << '\n';

    V.clear();
    V.resize(N + 1);

    bfs(O);

    return 0;
}