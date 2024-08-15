#include <bits/stdc++.h>

using namespace std;

int DX[4] = { 0, 0, 1, -1 };
int DY[4] = { 1, -1, 0, 0 };

bool V[51][2501];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T; cin >> T;
    while (T--) {
        int M, N, K; cin >> M >> N >> K;
        
        for (int y = 0; y < 51; y++) {
            for (int x = 0; x < 2501; x++) {
                V[y][x] = 1;
            }
        }

        while (K--) {
            int x, y; cin >> x >> y;
            V[y][x] = 0;
        }

        // bfs
        queue<pair<int, int>> Q; // { y, x }
        int S = 0;
        for (int y = 0; y < N; y++) {
            for (int x = 0; x < M; x++) {
                if (V[y][x]) continue;
                Q.push({ y, x }); S += 1;
                while (!Q.empty()) {
                    pair<int, int> o = Q.front(); Q.pop();
                    for (int i = 0; i < 4; i++) {
                        int nx = o.second + DX[i];
                        int ny = o.first + DY[i];
                        if (nx < 0 || nx >= M) continue;
                        if (ny < 0 || ny >= N) continue;
                        if (V[ny][nx]) continue;
                        Q.push({ ny, nx });
                        V[ny][nx] = 1;
                    }
                }
            }
        }

        cout << S << '\n';
    }

    return 0;
}