    #include <bits/stdc++.h>

    using namespace std;

    bool cmp(string a, string b) {
        if (a.length() == b.length()) {
            for (int i = 0; i < a.length(); i++) {
                if (a[i] != b[i]) return a[i] < b[i];
            }
        }
        return a.size() < b.size();
    }

    int main()
    {
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int n; cin >> n;
        vector<string> v; while (n--) { string x; cin >> x; v.push_back(x); }
        sort(v.begin(), v.end(), cmp);

        for (int i = 0; i < v.size(); i++) {
            if (!i || v[i] != v[i - 1]) cout << v[i] << '\n';
        }

        return 0;
    }