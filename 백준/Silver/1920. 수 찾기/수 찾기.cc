#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector<int> V;
    while (n--) { int x; cin >> x; V.push_back(x); }
    
    sort(V.begin(), V.end());

    int m; cin >> m;
    while (m--) {
        int x; cin >> x;
        cout << (binary_search(V.begin(), V.end(), x) ? "1\n" : "0\n");
    }

    return 0;
}