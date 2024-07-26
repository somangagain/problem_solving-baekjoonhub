#include <bits/stdc++.h>

using namespace std;

int T;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> T;

    while (T--) {
        string s; cin >> s;
        cout << s[0] << s[s.length() - 1] << '\n';
    }

    return 0;
}