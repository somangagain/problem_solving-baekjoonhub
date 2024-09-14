#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int x; cin >> x; string s; cin >> s;
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < x; j++) {
                cout << s[i];
            }
        }
        cout << '\n';
    }

    return 0;
}