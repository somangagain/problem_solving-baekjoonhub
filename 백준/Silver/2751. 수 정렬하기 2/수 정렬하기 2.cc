#include <bits/stdc++.h>

using namespace std;

int N;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    vector<int> V;
    while (N--) {
        int x; cin >> x;
        V.push_back(x);
    }

    sort(V.begin(), V.end());
    for (int i = 0; i < V.size(); i++) {
        cout << V[i] << '\n';
    }

    return 0;
}