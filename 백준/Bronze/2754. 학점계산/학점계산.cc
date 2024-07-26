#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
    double S = 0;
    if (s != "F") {
        S += 4 - (s[0] - 'A');
        if (s[1] != '0') S += 0.3 * (s[1] == '+' ? 1 : -1);
    }
    cout << fixed; cout.precision(1);
    cout << S;

    return 0;
}