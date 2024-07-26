#include <bits/stdc++.h>

using namespace std;

int N, S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N;

    vector<int> V;
    while (N--) { int x; cin >> x; V.push_back(x); }

    int v; cin >> v;

    for (int i = 0; i < V.size(); i++) {
        if (V[i] == v) S++;
    }

    cout << S;

    return 0;
}