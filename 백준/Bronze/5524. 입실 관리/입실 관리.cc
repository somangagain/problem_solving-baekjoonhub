#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N; cin >> N;
    while (N--) {
        string s; cin >> s;
        for (int i = 0; i < s.length(); i++) {
            cout << (s[i] < 'a' ? (char)(s[i] - 'A' + 'a') : s[i]);
        }
        cout << '\n';
    }

    return 0;
}