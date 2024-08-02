#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (i && !((s.length() - i) % 3)) cout << ',';
        cout << s[i];
    }

    return 0;
}