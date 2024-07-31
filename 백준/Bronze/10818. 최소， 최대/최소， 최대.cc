#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;

    int m = 1000001;
    int M = -1000001;

    while (n--) {
        int x; cin >> x;
        m = min(m, x);
        M = max(M, x);
    }

    cout << m << ' ' << M;

    return 0;
}