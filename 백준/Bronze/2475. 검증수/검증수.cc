#include <bits/stdc++.h>

using namespace std;

int S;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for (int i = 0; i < 5; i++) {
        int x; cin >> x;
        S += x * x;
    }
    S %= 10;

    cout << S;

    return 0;
}