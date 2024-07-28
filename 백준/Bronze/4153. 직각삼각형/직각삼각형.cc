#include <bits/stdc++.h>

using namespace std;

int A, B, C;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while (1) {
        cin >> A >> B >> C;
        if (A == 0) break;
        int M = max(A, max(B, C));
        if (A * A + B * B + C * C - M * M == M * M) cout << "right\n";
        else cout << "wrong\n";
    }

    return 0;
}