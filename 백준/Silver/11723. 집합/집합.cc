    #include <bits/stdc++.h>

    using namespace std;

    int find(vector<int>& v, int x) {
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == x) {
                return i;
            }
        }

        return -1;
    }

    int main()
    {
        ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        vector<int> v;

        int m; cin >> m;
        while (m--) {
            string s; cin >> s;
            if (s == "empty") { v.clear(); continue; }
            if (s == "all") { v.clear(); for (int i = 1; i <= 20; i++) v.push_back(i); continue; }

            int x; cin >> x; 
            int index = find(v, x);
            
            switch (s[0]) {
                case 'a':
                    if (index == -1) v.push_back(x);
                    break;
                case 'r':
                    if (index != -1) v.erase(v.begin() + index);
                    break;
                case 'c':
                    cout << (index == -1 ? 0 : 1) << '\n';
                    break;
                case 't':
                    if (index != -1) v.erase(v.begin() + index);
                    else v.push_back(x);
                    break;
            }
        }

        return 0;
    }