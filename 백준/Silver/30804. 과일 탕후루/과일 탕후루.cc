    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int n; cin >> n;
        vector<int> v; while (n--) { int x; cin >> x; v.push_back(x); }

        vector<int> c(10);
        int l, r, s; l = r = s = 0;

        while (r < v.size()) {
            c[v[r++]]++;
            while (count(c.begin(), c.end(), 0) < 8) c[v[l++]]--;
            s = max(s, r - l);
        }

        cout << s;

        return 0;
    }