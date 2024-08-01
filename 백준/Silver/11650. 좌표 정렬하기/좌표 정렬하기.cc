#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector<pair<int, int>> V;

    while (n--) {
        pair<int, int> p; cin >> p.first >> p.second;
        V.push_back(p);
    }

    sort(V.begin(), V.end(), cmp);

    for (int i = 0; i < V.size(); i++) {
        cout << V[i].first << ' ' << V[i].second << '\n';
    }

    return 0;
}