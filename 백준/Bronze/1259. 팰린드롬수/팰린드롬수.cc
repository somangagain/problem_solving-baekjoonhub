#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while (1) {
        string s; cin >> s;
        if (s == "0") break;
        int i = 0;
        bool flag = true;
        while (i < s.length() - i - 1) {
            if (s[i] != s[s.length() - i - 1]) {
                flag = false;
                break;
            }
            i++;
        }

        cout << (flag ? "yes" : "no") << '\n';
    }
    

    return 0;
}