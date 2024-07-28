#include <bits/stdc++.h>

using namespace std;

int N, M, A[101], S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    S = -1;
    for (int i = 0; i < N - 2; i++) {
        for (int j = i + 1; j < N - 1; j++) {
            for (int k = j + 1; k < N; k++) {
                int s = A[i] + A[j] + A[k];
                if (s <= M) {
                    S = max(S, s);
                }
            }
        }
    }

    cout << S;

    return 0;
}