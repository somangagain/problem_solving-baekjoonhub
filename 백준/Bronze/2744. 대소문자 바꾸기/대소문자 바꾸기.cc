#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
    string S = "";
    for (int i = 0; i < s.length(); i++) {
        S += "0";
        S[i] = (char)(s[i] >= 'a' ? s[i] - 'a' + 'A' : s[i] - 'A' + 'a');
    }

    cout << S;

    return 0;
}