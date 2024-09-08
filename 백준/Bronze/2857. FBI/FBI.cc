#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    bool flag = false;
    for (int i = 1; i <= 5; i++) {
        string s; cin >> s;
        if (s.find("FBI") != string::npos) {
            flag = true;
            cout << i << ' ';
        }
    }

    if (!flag) {
        cout << "HE GOT AWAY!";
    }

    return 0;
}