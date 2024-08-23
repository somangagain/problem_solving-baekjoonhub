#include <bits/stdc++.h>

using namespace std;

int N, M;

struct Node {
    int x;
    int y;
};

int MAP[1001][1001], A[1001][1001];
Node DIR[4] = { {-1,0}, {1,0}, {0,-1}, {0,1} };

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    Node S;
    cin >> N >> M;
    for (int y = 0; y < N; y++) {
        for (int x = 0; x < M; x++) {
            int t; cin >> t; MAP[x][y] = t;
            if (t == 2) {
                S = { x, y };
            }
        }
    }

    // solve
    queue<pair<Node, int>> Q; Q.push({ S, 0 });
    while (!Q.empty()) {
        Node O = Q.front().first; 
        int D = Q.front().second;
        Q.pop();

        for (int i = 0; i < 4; i++) {
            Node P = { (O.x + DIR[i].x), (O.y + DIR[i].y) };
            if (P.x < 0 || P.x >= M || P.y < 0 || P.y >= N) continue;
            if (A[P.x][P.y] != 0 || MAP[P.x][P.y] != 1) continue;
            A[P.x][P.y] = D + 1;
            Q.push({ P, D + 1 });
        }
    }

    for (int y = 0; y < N; y++) {
        for (int x = 0; x < M; x++) {
            if (MAP[x][y] == 0 || (x == S.x && y == S.y)) cout << 0 << ' ';
            else {
                int t = A[x][y];
                switch (t) {
                    case 0: {
                        cout << "-1 ";
                        break;
                    }
                    default: {
                        cout << t << ' ';
                        break;
                    }
                }
            }
        }
        cout << '\n';
    }

    return 0;
}