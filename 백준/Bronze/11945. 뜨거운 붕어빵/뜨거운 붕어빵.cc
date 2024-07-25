#include <bits/stdc++.h>

using namespace std;

int N, M;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;
    for (int y = 0; y < N; y++) {
        string s; cin >> s;
        for (int i = M - 1; i >= 0; i--) {
            cout << s[i];
        }
        cout << '\n';
    }

    return 0;
}