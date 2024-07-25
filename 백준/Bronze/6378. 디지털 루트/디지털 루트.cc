#include <bits/stdc++.h>

using namespace std;

int digitalRoot(string s) {
    int S = 0;
    for (int i = 0; i < s.size(); i++) {
        S += s[i] - '0';
    }

    if (S >= 10) return digitalRoot(to_string(S));
    else return S;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while (1) {
        // input
        string s; cin >> s;
        if (s == "0") {
            break;
        }

        // solution
        int S = digitalRoot(s);

        // output
        cout << S << '\n';
    }

    return 0;
}