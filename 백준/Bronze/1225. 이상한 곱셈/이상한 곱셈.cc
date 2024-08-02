#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string a, b; cin >> a >> b;
    int x, y; x = y = 0;

    for (char c : a) x += (c - '0');
    for (char c : b) y += (c - '0');

    long long s = (long long)x * y;

    cout << s;;

    return 0;
}