#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long a, b, c; cin >> a >> b >> c;
    long long r = a + b - 2 * c;
    if (r >= 0) cout << r;
    else cout << (a + b);

    return 0;
}