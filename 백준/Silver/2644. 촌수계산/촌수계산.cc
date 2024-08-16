#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> A;
vector<int> V;

void dfs(int x, int d) {
    V[x] = d;
    for (int i = 0; i < A[x].size(); i++) {
        if (A[x][i] && V[i] == -1) dfs(i, d + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, Q1, Q2, M; cin >> N >> Q1 >> Q2 >> M;
    
    A.resize(N + 1); fill(A.begin() + 1, A.end(), vector<int>(N + 1));
    while (M--) { int a, b; cin >> a >> b; A[a][b] = A[b][a] = 1; }
    V.resize(N + 1); fill(V.begin() + 1, V.end(), -1);

    dfs(Q1, 0);

    cout << V[Q2];

    return 0;
}