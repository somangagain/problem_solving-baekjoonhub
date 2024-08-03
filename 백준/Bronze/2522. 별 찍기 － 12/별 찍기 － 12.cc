#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;
    for (int i = 1; i <= n - 1; i++) {
        for (int j = n - i; j > 0; j--) cout << " ";
        for (int j = i; j > 0; j--) cout << "*";
        cout << '\n';
    }   
    for (int j = n; j > 0; j--) cout << "*";
    cout << '\n';
    for (int i = n - 1; i > 0; i--) {
        for (int j = n - i; j > 0; j--) cout << " ";
        for (int j = i; j > 0; j--) cout << "*";
        cout << '\n';
    }

    return 0;
}