#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

int iabs(int x) {
    return x >= 0 ? x : -x;
}

class Huge {
public:
    string value;

    Huge(string s) : value(s) {
    }

    const Huge operator +(const Huge& T) const {
        string a = value; string b = T.value;
        reverse(a.begin(), a.end()); reverse(b.begin(), b.end());

        string t = a.length() > b.length() ? b : a;
        for (int i = 0; i < iabs(a.length() - b.length()); i++) t += '0';
        if (a.length() > b.length()) b = t; else a = t;

        t = ""; short s = 0;
        for (int i = 0; i < a.length(); i++) {
            s += a[i] + b[i] - '0' * 2;
            t += (s % 10) + '0'; s /= 10;
        }
        if (s) t += s + '0';

        reverse(t.begin(), t.end());
        Huge huge(t); return huge;
    }
};

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string a, b; cin >> a >> b;
    Huge s = Huge(a) + Huge(b);
    cout << s.value;

    return 0;
}