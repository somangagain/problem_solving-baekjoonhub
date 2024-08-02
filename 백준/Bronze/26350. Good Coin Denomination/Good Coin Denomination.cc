#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool flag = true; int l = 0;
        cout << "Denominations:";
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (i && x < 2 * l) flag = false;
            l = x; cout << ' ' << x;
        }
        if (flag) cout << "\nGood coin denominations!\n\n";
        else cout << "\nBad coin denominations!\n\n";
    }

    return 0;
}