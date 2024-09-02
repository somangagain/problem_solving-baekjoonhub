#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b, c; cin >> a >> b >> c;
    if (a == b && b == c) cout << (10000 + a * 1000);
    else if (a == b || b == c || c == a) cout << (1000 + ((a == b || c == a) ? a : b) * 100);
    else cout << (max(a, max(b, c)) * 100);

    return 0;
}