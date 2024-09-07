#include <bits/stdc++.h>

using namespace std;

int A[10];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m; cin >> n >> m;
    vector<int> V;
    for (int i = 0; i < n + m; i++) {
        int x; cin >> x; V.push_back(x);
    }

    sort(V.begin(), V.end());
    for (int i = 0; i < n + m; i++) {
        cout << V[i] << ' ';
    }

    return 0;
}