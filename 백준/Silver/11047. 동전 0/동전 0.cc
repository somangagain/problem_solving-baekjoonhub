    #include <bits/stdc++.h>

    using namespace std;

    bool cmp(int a, int b) {
        return b - a;
    }

    int main()
    {
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int n, k; cin >> n >> k;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int x; cin >> x; v.push_back(x);
        }

        sort(v.begin(), v.end(), cmp);

        int s, c, p; s = c = p = 0;
        while (s != k) {
            if (v[p] + s <= k) {
                c++; s += v[p];
            }
            else {
                p++;
            }
        }

        cout << c;

        return 0;
    }