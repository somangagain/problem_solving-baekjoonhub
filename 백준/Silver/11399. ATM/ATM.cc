    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        int n; cin >> n;
        vector<int> v; while (n--) { int x; cin >> x; v.push_back(x); } sort(v.begin(), v.end());
        
        int w = 0; int s = 0;
        for (int i = 0; i < v.size(); i++) {
            s += w + v[i];
            w += v[i];
        }

        cout << s;

        return 0;
    }