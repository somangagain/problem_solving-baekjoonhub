#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, string> a, pair<int, string> b) {
    return a.first < b.first;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    vector<pair<int, string>> V;

    while (n--) {
        pair<int, string> p; cin >> p.first >> p.second;
        V.push_back(p);
    }

    stable_sort(V.begin(), V.end(), cmp);

    for (int i = 0; i < V.size(); i++) {
        cout << V[i].first << ' ' << V[i].second << '\n';
    }

    return 0;
}