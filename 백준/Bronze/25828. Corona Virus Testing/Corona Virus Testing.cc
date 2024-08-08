#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int g, p, t; cin >> g >> p >> t;
    int s1 = g * p;
    int s2 = g + t * p;
    if (s1 < s2) cout << 1;
    else if (s1 == s2) cout << 0;
    else cout << 2;

    return 0;
}