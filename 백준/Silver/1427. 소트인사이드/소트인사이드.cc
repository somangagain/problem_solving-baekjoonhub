#include <bits/stdc++.h>

using namespace std;

int A[10];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s; cin >> s;
    for (int i = 0; i < s.length(); i++) {
        A[s[i] - '0']++;
    }
    for (int i = 9; i >= 0; i--) {
        while (A[i]--) {
            cout << (char)(i + '0');
        }
    }

    return 0;
}